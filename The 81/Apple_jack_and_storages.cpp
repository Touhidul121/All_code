#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,a;
    cin>>n;
    vector<int>cnt(100000);
    for(int i=0;i<n;i++)
    {
        cin>>a;
        a--;
        cnt[a]++;
    }
    multiset<int>st;
    for(int i=0;i<100000;i++)
    {

        st.insert(cnt[i]);
    }
    int q;
    cin>>q;
    while(q--){
            char ch;
      cin>>ch;
      int x;
      cin>>x;
      --x;
      st.erase(st.find(cnt[x]));
      if(ch=='+')
        cnt[x]++;
      else
        cnt[x]--;
      st.insert(cnt[x]);

    int m1=0,m2=0,m3=0;
    auto it=st.rbegin();

        m1=*it;
        it++;

        m2=*it;
        it++;

        m3=*it;
    if(m1>=8 || (m1>=6 && m2>=2)||(m1>=4&&m2>=4)||(m1>=4&&m2>=2&&m3>=2))
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
    }
}
