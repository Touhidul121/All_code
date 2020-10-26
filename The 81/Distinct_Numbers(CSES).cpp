#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,a;
    cin>>n;
    set<int>st;

    for(int i=1;i<=n;i++)
        cin>>a, st.insert(a);
    cout<<st.size()<<"\n";
}
