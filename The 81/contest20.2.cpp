    #include<bits/stdc++.h>
    #define ll long long int
    using namespace std;

    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            ll n,a,flag5=0;
        cin>>n;

        vector<ll>v,v1;
        ll ind1=-1,ind2=-1;
        bool c=true,d=true;

        for(ll i=0;i<n;i++)
        {
          cin>>a;

          v.push_back(a);
        }

        for(int i=0;i<n;i++)
        {
            cin>>a;
            v1.push_back(a);
        }
        if(v[0]!=v1[0])
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
        {
            for(int i=1;i<n;i++)
            {
                if(v[i-1]==1)
                {
                    ind2=i-1;

                }
                else if(v[i-1]==-1)
                {
                    ind1=i-1;
                }
                if(v[i]==v1[i])
                    continue;
               else if(v1[i]>0&&v[i]<v1[i]&&ind2<i&&ind2!=-1)
                {
                    continue;
                }
                else if(v1[i]<0&&v[i]>v1[i]&&ind1<i&&ind1!=-1)
                {
                    continue;
                }
                else if(v1[i]>0&&v[i]>v1[i]&&ind1<i&&ind1!=-1)
                {
                    continue;
                }
                else if(v1[i]<0&&v[i]<v1[i]&&ind2<i&&ind2!=-1)
                    continue;
                    else {
                        flag5++;
                        break;
                    }
            }
            if(flag5)
            {
                cout<<"NO"<<endl;
            }
            else
                cout<<"YES"<<endl;
        }
    }
    }
