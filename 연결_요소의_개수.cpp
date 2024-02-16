#include <iostream>
#include <vector>
#include <array>

using namespace std;

vector<vector<int>> graph;
array<int,1001> visited;

void DFS(int node)
{
    if(visited[node]) return;
    visited[node] = true;
    for(int d = 0; d < graph[node].size(); d++) DFS(graph[node][d]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,v;
    cin >> n >> v;
    graph.resize(n+1);
    int connect = 0;
    
    for(int i = 0; i < v; i++)
    {
        int s, e;
        cin >> s >> e;
        graph[s].push_back(e);
        graph[e].push_back(s);
    }

    //모든 정점을 탐색하지 못했으면 connect++;
    for(int j = 1; j <= n; j++)
    {
        if(visited[j]) continue;
        else
        {
            DFS(j);
            connect++;
        }
    }

    cout << connect;
    return 0;
}