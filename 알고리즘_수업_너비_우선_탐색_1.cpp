#include <iostream>
#include <vector>
#include <array>
#include <deque>

using namespace std;

vector<vector<int>> graph;
vector<int> visited;
array<bool,100001> check;

int BFS(int node)
{

}

int main()
{
    int n, m, s;
    cin >> n >> m >> s;

    graph.resize(n+1);
    
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    BFS(s);

    return 0;
}