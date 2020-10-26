#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

	int t;
	cin>>t;
   while(t--)
	{
		ll i, ans=0, r, x, n, j, n1=0, n2=0;
		string s;
		cin>>s>>r;
		n1=stoull(s);
		s="0"+s;
		n=s.size();
		vector<ll> v(n, 0);

		for(i=1; i<n; i++)
		{
			x=(int) s[i]-'0';
			v[i]=v[i-1]+x;
		}

		for(i=n-1; i>0; i--)
		{
			if(v[i]>r)
			{
				s[i]='0';
				if(s[i]<'9')
				{
					s[i-1]++;
					v[i-1]+=1;
				}
				else
				{
					for(j=i-1; j>=0; j--)
					{
						if(s[j]<'9')
						{
							s[j]++;
							v[j]++;
							break;
						}
						else
						{
							s[j]='0';
						}
					}
				}
			}
			else
			{
				break;
			}
		}
		n2=stoull(s);
		cout<<(ll)(n2-n1)<<"\n";
	}
	return 0;

}
