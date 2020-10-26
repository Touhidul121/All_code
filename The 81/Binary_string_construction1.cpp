 #include<bits/stdc++.h>
 using namespace std;

 int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int t;
     cin>>t;
    while(t--)
    {
        string s,w;
        int x,n;
        cin>>s>>x;
        n=s.size();
        w=string(n,'1');
        bool f=true;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                if(i+x<n)
                    w[i+x]='0';
                if(i-x>=0)
                    w[i-x]='0';
            }
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                if(!((i+x<n && w[i+x]=='1')||(i-x>=0 && w[i-x]=='1')))
                {
                    f=false;break;
                }
            }
        }
        if(!f)
            cout<<"-1\n";
        else
            cout<<w<<"\n";

    }

    return 0;
 }

