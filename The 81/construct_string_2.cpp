    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int t;
        cin>>t;
        while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        int rest=n%a;
        int ans=n/a;


     for(int j=0;j<ans;j++){


        s+=string(a-b+1,'a');
        char x='b';
        for(int i=0;i<b-1;i++)
        {
            s+=x;
            x++;
        }
    }
        s+=string(n-(a*ans),'a');


        cout<<s<<endl;
        }
    }
