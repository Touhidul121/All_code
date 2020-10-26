#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100];
int main(){
int n,a,b,e;

cin>>n;
cout<<"Enter edges"<<"\n";
cin>>e;
for(int i=0;i<e;i++)
{
   cin>>a>>b;
   adj[a].push_back(b);
   adj[b].push_back(a);
}
vector<int> side(n, -1);
bool is_bipartite = true;
queue<int> q;
for (int st = 0; st < n; ++st) {
    if (side[st] == -1) {
        q.push(st);
        side[st] = 0;
        while (!q.empty()) {
            int v = q.front();
            q.pop();
            for (int u : adj[v]) {
                if (side[u] == -1) {
                    side[u] = side[v] ^ 1;
                    q.push(u);
                } else {
                    is_bipartite &= side[u] != side[v];
                }
            }
        }
    }
}

cout << (is_bipartite ? "YES" : "NO") << endl;
}
