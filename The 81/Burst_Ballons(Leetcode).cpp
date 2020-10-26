 #include<bits/stdc++.h>
 using namespace std;
 int n;
   int solve(int pos,vector<int>v)
    {
        if(pos>=n-1||pos<=0)return 0;

        int ans1=0,ans2=0;
        ans1=solve(pos+1,v);
        int temp=v[pos];
        int temp1=v[pos-1];
        int temp2=v[pos+1];
        if(v.size()>=2 && pos<n-1)
        v.erase(v.begin()+pos);

        ans2=temp1*temp*temp2+solve(pos+1,v);
       // cout<<ans1<<" "<<ans2<<"\n";

        return max(ans1,ans2);
    }
    int main(){
        int a;
        cin>>n;
        vector<int>nums;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            nums.push_back(a);
        }
        vector<int>v;
        v.push_back(1);
        for(int x:nums)
        v.push_back(x);

        v.push_back(1);

        n=v.size();

        cout<<solve(1,v)<<"\n";
    }
