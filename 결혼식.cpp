#include <iostream>
#include <array>
#include <vector>

using namespace std;

vector<vector<int>> graph;
array<bool,501> check;
int result = 0;

void DFS(int node)
{
    //현재 정점 방문했으면 return;
    if(check[node]) return;
    check[node] = true;
    
    //자신과 연결된 노드 각각을 dfs(node)로 돌림
    for(int d = 0; d < graph[node].size(); d++) DFS(graph[node][d]);
}

int main()
{
    int n, m;
    cin >> n >> m;
    graph.resize(n+1);

    for(int e = 1; e <= m; e++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    DFS(1);

    cout << result;
    return 0;
}