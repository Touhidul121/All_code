#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,a;
    cin>>n;
    multiset<int>st;
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        st.insert(a);

    }

    int w=*max_element(v.begin(),v.end());
    int cnt=0,ans=0;



    for(int i=1;i<=2*w;i++)
    {
        multiset<int>st1=st;

        for(int j=0;j<n;j++)
        {
           //cout<<v[j]<<" "<<i-v[j]<<"\n";
           if(i-v[j]>0){
            if(st1.find(i-v[j])!=st1.end()&&st1.find(v[j])!=st1.end()&&st1.size()>1){
                cnt++;
                if(st1.find(v[j])!=st1.end())
                st1.erase(st1.find(v[j]));
                if(st1.find(i-v[j])!=st1.end())
                st1.erase(st1.find(i-v[j]));
            }
           }

        }
        //cout<<cnt<<" ";
        ans=max(cnt,ans);
        cnt=0;
        st1.clear();
    }
    cout<<ans<<"\n";
    }
}
