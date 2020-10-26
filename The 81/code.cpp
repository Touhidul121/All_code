#include<bits/stdc++.h>
#define dfgetline(x) scanf(" %[^\n]s",x)
#define dfcs(x) "Case "<<x<<": "
#define dfpb(x) push_back(x)
#define uint unsigned int
using namespace std;
int cs=0;

int main(){
    ///ios_base::sync_with_stdio(0);
    ///cin.tie(0);
    int t, l, m, n, r, i, q;
    long long a,b,p;
    bool f, ff;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> p;
        cin >> s;
        l=s.length();
        r=l-1; n=0; f=true; q=l;
        for(i=r-1; i>=0; i--)
        {
            while(i>=1&&s[i]==s[i-1])
                i--;

            if(s[i]=='A')
                n+=a;
            else
                n+=b;
            if(n>p||i==0)
                break;
            q=i+1;
        }
        if(n<=p)
            q=i+1;

        cout << q << endl;
    }



    return 0;
}
