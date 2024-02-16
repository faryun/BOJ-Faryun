#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

using namespace std;

//방문한 정점
vector<int> visited;
deque<int> bfs_q;
bool check[1001] = {0, };

//그래프
vector<vector<int>> graph;

void DFS(int node)
{
    //현재 정점 방문했으면 return;
    if(check[node]) return;
    //현재 정점 탐색한 리스트에 추가
    visited.push_back(node);
    check[node] = true;
    //자신과 연결된 노드 각각을 dfs(node)로 돌림
    for(int d = 0; d < graph[node].size(); d++) DFS(graph[node][d]);
}

void BFS(int node)
{
    //시작 정점 방문
    visited.push_back(node);
    bfs_q.push_back(node);
    while(true)
    {
        //큐가 소진될 때까지 계속한다
        if(bfs_q.empty()) break;
        bfs_q.pop_front();
        for(int b = 0; b < graph[node].size();b++)
        {
            bfs_q.push_back(graph[node][b]);
            visited.push_back(graph[node][b]);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //정점의 갯수
    int n;
    //간선의 갯수
    int m;
    //탐색 시작 정점 번호
    int start;
    //간선
    int edge_s, edge_e;
    
    //그래프 구현
    cin >> n >> m >> start;
    graph.resize(n+1);

    for(int e = 1; e <= m; e++)
    {
        cin >> edge_s >> edge_e;
        graph[edge_s].push_back(edge_e);
        graph[edge_e].push_back(edge_s);
    }

    //오름차순 정렬
    for(int s = 1; s <= n; s++) sort(graph[s].begin(), graph[s].end());

    //DFS 깊이 우선 탐색
    DFS(start);
    for(auto d : visited) cout << d << " ";
    cout << '\n';
    
    //정리
    visited.clear();
    
    //BFS 너비 우선 탐색
    BFS(start);
    for(auto b : visited) cout << b << " ";

    return 0;
}