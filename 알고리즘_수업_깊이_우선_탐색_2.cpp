#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;

vector<vector<int>> graph;
array<bool,100001> check;
vector<int> visited;
int order = 1;

void DFS(int node)
{
    if(check[node]) return;
    visited[node] = order;
    check[node] = true;
    order++;
    for(int d = 0; d < graph[node].size(); d++) DFS(graph[node][d]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, s;
    cin >> n >> m >> s;
    
    graph.resize(n+1);
    visited.resize(n+1);

    for(int i = 0; i < m; i++)
    {
        int vs, ve;
        cin >> vs >> ve;
        graph[vs].push_back(ve);
        graph[ve].push_back(vs);
    }

    for(int s = 1; s <= n; s++) sort(graph[s].begin(),graph[s].end(),greater<int>());
    
    DFS(s);

    for(int o = 1; o <= n; o++) cout << visited[o] << '\n';
    return 0;
}