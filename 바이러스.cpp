#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> network;
vector<int> visited;
bool check[1001] = {0, };

void DFS(int node)
{
    if(check[node]) return;
    visited.push_back(node);
    check[node] = true;
    for(int d = 0; d < network[node].size(); d++) DFS(network[node][d]);
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int com, net;
    int net_s, net_e;
    cin >> com;
    cin >> net;
    network.resize(com+1);

    for(int i = 0; i < net; i++)
    {
        cin >> net_s >> net_e;
        network[net_s].push_back(net_e);
        network[net_e].push_back(net_s);
    }

    DFS(1);
    cout << visited.size() - 1 << '\n';
    return 0;
}