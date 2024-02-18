#include <iostream>
#include <vector>
#include <array>
#include <deque>
#include <algorithm>

using namespace std;

vector<vector<int>> graph;
array<bool,100001> check;
vector<int> visited;
deque<int> bfs_q;

void BFS(int start)
{
    int order = 1;
    visited[start] = order;
    check[start] = true;
    bfs_q.push_back(start);

    while(true)
    {
        if(bfs_q.empty()) break;
        int node = bfs_q[0];
        bfs_q.pop_front();

        for(int b = 0; b < graph[node].size(); b++)
        {
            if(!check[graph[node][b]])
            {
                order++;
                bfs_q.push_back(graph[node][b]);
                check[graph[node][b]] = true;
                visited[graph[node][b]] = order;
            }
        }
    }
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

    BFS(s);
    
    for(int o = 1; o <= n; o++) cout << visited[o] << '\n';
    return 0;
}