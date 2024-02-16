#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;

vector<vector<int>> graph;
vector<int> visited;
array<bool, 100001> check = {0, };
int order = 1;

void DFS(int node)
{
    if(check[node]) return;
    visited[node] = order;
    check[node] = true;
    order++;
    for(int d = 0; d < graph[node].size(); d++) DFS(graph[node][d]);
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, v, s;
    int vs, ve;
    cin >> n >> v >> s;
    
    graph.resize(n+1);
    visited.resize(n+1);

    for(int i = 0; i < v; i++)
    {
        cin >> vs >> ve;
        graph[vs].push_back(ve);
        graph[ve].push_back(vs);
    }

    //오름차순 정렬
    for(int t = 1; t <= n; t++) sort(graph[t].begin(), graph[t].end());

    DFS(s);

    //방문 순서 출력
    for(int j = 1; j <= n; j++)
    {
        cout << visited[j] << '\n';
    }

    return 0;
}