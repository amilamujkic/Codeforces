#include <bits/stdc++.h>

using namespace std;

vector <int> vis(1002);
int adj[1002];

void dfs(int t) {
    vis[t]++;
    if (vis[t] == 2) {
      cout<<t<<" ";
      fill(vis.begin(),vis.end(),0);
    }
    else dfs(adj[t]);
}

int main() {

  int n;
  cin>>n;

  for(int i=1;i<=n;i++) {
     cin>>adj[i];
  }

  for(int i=1;i<=n;i++) {
     dfs(i);
  }

}

