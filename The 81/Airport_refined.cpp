#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,count=0,x=0,flag=0;
    cin>>n>>m;

    vector<int> v,v1;

for(int i=0;i<m;i++)
{
    cin>>a;
    v.push_back(a);
    v1.push_back(a);// another vector is needed because v will be changed in the process of finding max
}

sort(v.rbegin(),v.rend()); //sort in decreasing order
sort(v1.rbegin(),v1.rend());//sort in decreasing order
int mx=0,mn=0;
//---for  max sort every time in decreasing order and take first one

for(int i=0;i<n;i++)
{
    mx+=v[0]--;
    sort(v.rbegin(),v.rend());
}

/*-----for min come from the last end take until that element is zero
here sorting every time is not needed because we are going to next element after making it zero
 so sorting will keep no effect*/

 for(int i=m-1;i>=0;i--)
 {
     x=v1[i];

     while(x--)
     {
         mn+=(x+1);  // x+1 because x is decreasing by 1 because of using it in while loop
         count++;
         if(count==n)
         {
             flag++;
             break;
         }
     }
     if(flag)
        break;
 }

 cout<<mx<<" "<<mn<<endl;
}
