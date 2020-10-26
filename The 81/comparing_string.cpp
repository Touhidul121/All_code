#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
int count=0;
vector<int>v;


  if(a.size()!=b.size())
    cout<<"NO"<<endl;
  else{
for(int i=0;i<a.size();i++)
{
    if(a[i]!=b[i])
    {
      v.push_back(i);
      count++;
    }
    if(count==2)
        break;
}
if(v.size()==2){
        swap(a[v[0]],a[v[1]]);

    if(a==b){
        cout<<"YES"<<endl;
        return 0;
    }
}

        cout<<"NO"<<endl;
  }
}

