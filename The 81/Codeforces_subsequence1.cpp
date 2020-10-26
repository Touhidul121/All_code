#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll k;
    cin>>k;
    string s="codeforces";
    vector<ll>val(s.size(),1);

    ll whole_product=1;
    bool f=false;
    while(whole_product<k)
    {
        for(int i=0;i<val.size();i++)
        {
            val[i]++;
            whole_product=whole_product/(val[i]-1); // puraton value fele dao
            whole_product=whole_product*val[i];
            if(whole_product>=k)
            {
                f=true;break;
            }
        }
        if(f)break;
    }
    for(int i=0;i<val.size();i++)
    {
        while(val[i]--)
        {
            cout<<s[i];
        }
    }
    cout<<"\n";
}
