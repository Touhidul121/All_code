#include<bits/stdc++.h>
using namespace std;
#define maxN 101
int arr[maxN];
int dp[]
int n;
int ans=0;
int solve(int i)
{

    if(i>n)return 0;
    int ans1=0,ans2=0,ans3=0;
    if(arr[i]==0){
    if(i==1 || i==n)
    {
        return 3;
    }
    else{
    if(i+1<=n && abs(arr[i+1]-arr[i-1]<=1)){

        ans1+=1+solve(i+1);
    }
    else solve(i+1);
    if(i+1<=n && abs(arr[i+1]-(arr[i-1]+1))<=1){

        ans2+=1+solve(i+1);
    }
    else solve(i+1);
    if(i+1<=n && abs(arr[i+1]-(arr[i-1]-1))<=1){

        ans3+=1+solve(i+1);

    }
    else solve(i+1);
    }
}

    else solve(i+1);

    return ans=max(ans,ans1+ans2+ans3);

}
int main()
{

    cin>>n;
    for(int i=1;i<=n;i++)cin>>arr[i];
    if(n==1){
            if(arr[1]==0)
        cout<<1<<"\n";
    else
        cout<<0<<"\n";
    }else

    cout<<solve(1)<<"\n";
}
