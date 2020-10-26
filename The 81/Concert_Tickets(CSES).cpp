#include<bits/stdc++.h>
using namespace std;

const int maxN = 2e5;
int main()
{
  int n,m,x,a;
  cin>>n>>m;
  multiset<int>st;
  for(int i=0;i<n;i++)
  {
      cin>>a;
      st.insert(a);
  }

  for(int i=0;i<m;i++)
  {
      cin>>x;
      auto it=st.lower_bound(x+1);
      if(it==st.begin())
        cout<<-1<<"\n";
      else
      {
          --it;
          cout<<*it<<"\n";
         st.erase(st.find(*it));
      }
  }
}
