#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

using namespace std;

vector<int> visited;
array<bool,1001> check = {0, };
vector<vector<int>> graph;
int height = 0;

void DFS(int node)
{
    //현재 정점 방문했으면 return;
    if(check[node]) return;
    check[node] = true;
    visited[node] = height;
    //자신과 연결된 노드 각각을 dfs(node)로 돌림
    for(int d = 0; d < graph[node].size(); d++)
    {
        DFS(graph[node][d]);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, v, r;
    cin >> n >> v >> r;
    graph.resize(n+1);
    visited.resize(n+1);

    //방문 못한 정점은 -1
    for(int in = 1; in <= n; in++) visited[in] = -1;

    for(int i = 1; i <= v; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int s = 1; s <= n; s++) sort(graph[s].begin(), graph[s].end());
    
    DFS(r);
    for(int i = 1; i < visited.size(); i++) cout << visited[i] << endl;
    return 0;
}