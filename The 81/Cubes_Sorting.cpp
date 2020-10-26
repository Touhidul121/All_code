
#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
#define ar array
#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll A1[5*10001];

        ll n;
        cin>>n;

        for(int i=0; i<n; i++)
            cin>>A1[i];
        oset<ar<int,2>>s;
        ll ans1=0;
        ll cnt1=0;
        for(int i=n-1; i>=0; i--)
        {

            ans1=s.order_of_key({A1[i],0});

            cnt1+=ans1;

            s.insert({A1[i],i});
        }

        ll ans2=n*(n-1)/2;
        if(cnt1>=ans2)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
}

