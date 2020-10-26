#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,count=0,flag=0,flag1=0,x=0;
        cin>>n;
        vector<int> v(n);
        vector<int> v1;
        bool o=false;

        for(int j=0;j<n;j++)
        {
            int a,b;
            cin>>a;

            while(a--)
            {
                cin>>b;
                v1.push_back(b);
            }

             flag1=0;
            for(int i=0; i<v1.size(); i++)
            {

                if(v[v1[i]-1]==0)
                {
                    flag1++;


                    v1[i]--;

                    v[v1[i]]++;


                    break;
                }
            }
            if(flag1==0&&o==false){
            x=j+1;
            o=true;
            }
            v1.clear();
        }

        for(int i=0; i<n; i++)
        {
            if(v[i]==0)
            {
                flag++;
                cout<<"IMPROVE"<<endl;
                cout<<x<<" "<<i+1<<endl;
                break;
            }
        }
        if(flag==0)
            cout<<"OPTIMAL"<<endl;
    }
}
