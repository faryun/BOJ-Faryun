#include <iostream>
#include <vector>
#include <array>

using namespace std;

vector<vector<int>> graph;
vector<int> visited;
array<bool,1001> check = {0, };
int result = 0;
void DFS(int node)
{
    //현재 정점 방문했으면 return;
    if(check[node]) return;
    //현재 정점 탐색한 리스트에 추가
    visited.push_back(node);
    check[node] = true;
    result++;
    //자신과 연결된 노드 각각을 dfs(node)로 돌림
    for(int d = 0; d < graph[node].size(); d++) DFS(graph[node][d]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        graph.clear();

        int n, m;
        cin >> n >> m;
        graph.resize(n+1);
        int a, b;
        for(int e = 1; e <= m; e++)
        {
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        DFS(1);

        cout << result << '\n';
    }
    return 0;
}