#include <bits/stdc++.h>
using namespace std;

int m,n;
vector<int> adj[100000];
int visited[100000];

void dfs(int k){
    if (visited[k]) return;
    visited[k] = true;
    cout << k << " ";
    for (int i=0;i<adj[k].size();i++){
        dfs(adj[k][i]);
    }
}

int main(){
    cin >> n >> m;
    int temp,temp2;
    for (int i=0;i<m;i++){
        cin >> temp >> temp2;
        adj[temp].push_back(temp2);
        adj[temp2].push_back(temp);
    }
    dfs(1);
    return 0;
}