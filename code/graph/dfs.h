#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

const int VMAX = 10000;

#define NOTEBOOK
// Depth first search

int        V;
vector<vi> adj;
bool       vis[VMAX];
vi         topsort;  // Topological Sort.
                     // Only works in directed acyclic graph.

void dfs(int s) {
    vis[s] = true;
    for (auto a : adj[s]) {
        if (!vis[a]) {
            dfs(a);
        }
    }
    topsort.push_back(s);  // Only works in DAG.
}
#define NOTEBOOK

int main() {
    cout << "OK" << endl;
    return 0;
}