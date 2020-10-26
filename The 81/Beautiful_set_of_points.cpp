#include<bits/stdc++.h>
using namespace std;

int main()

{

   ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n, m;
  cin >> n >> m;

  if (n < m) {
    cout << n + 1 << endl;
    for(int i=0;i<n+1;i++)
      cout << n - i << ' ' << i << endl;
  } else {
    cout << m + 1 << endl;
    for(int i=0;i<m+1;i++)
      cout << i << ' ' << m - i << endl;
  }

  return 0;

}
