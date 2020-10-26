#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()

priority_queue<pair<ll,pair<ll,ll>>> pq;
vector<pair<ll,ll>> graph[100007];
ll leaves[100007],sum;
bool vis[100007];

void dfs(ll node){
	vis[node]=1;

	if(graph[node].size()==1 && node!=1){
		leaves[node]=1;
		return;
	}

	for(ll i=0;i<graph[node].size();i++){
		ll child=graph[node][i].first,w=graph[node][i].second;

		if(!vis[child]){
			dfs(child);
			leaves[node]+=leaves[child];
			sum+=(w*leaves[child]);
			pq.push(mp(w*leaves[child]-(w/2)*leaves[child],mp(w,leaves[child])));
		}
	}
}

int main()
{

	ll t;
	cin>>t;

	read:
	while(t--){
		ll n,s,ans=0;
		cin>>n>>s;

		sum=0;
		while(!pq.empty()) pq.pop();
		for(ll i=1;i<=n;i++){
			graph[i].clear();
			vis[i]=0;
			leaves[i]=0;
		}

		for(ll i=1;i<n;i++){
			ll u,v,w;
			cin>>u>>v>>w;

			graph[u].pb(mp(v,w));
			graph[v].pb(mp(u,w));
		}

		dfs(1);

		while(sum>s){
			ans++;
			pair<ll,pair<ll,ll>> details=pq.top();
			pq.pop();
			ll dif=details.first,cost=details.second.first,lvs=details.second.second;
			sum-=dif;
			cost/=2;
			dif=(cost*lvs)-((cost/2)*lvs);
			pq.push(mp(dif,mp(cost,lvs)));
		}

		cout<<ans<<endl;
	}

	return 0;
}

