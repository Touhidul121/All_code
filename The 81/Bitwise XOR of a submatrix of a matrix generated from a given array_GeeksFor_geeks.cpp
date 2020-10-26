#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,X,Y,S,T;
    cin>>n>>X>>Y>>S>>T;

    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int left=0,right=0;

    for(int i=Y;i<=T;i++)
        left^=arr[i];

    for(int i=X;i<=S;i++)
        right^=arr[i];

    cout<<(left&right)<<"\n";
}
