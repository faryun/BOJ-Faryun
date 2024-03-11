#include <iostream>
#include <vector>
#include <array>
#include <deque>

using namespace std;

vector<pair<int, vector<int>>> farm;
array<bool,2500> check;

int worm = 0;

void BFS(int start)
{
    deque<int> bfs_q;
    check[start] = true;
    bfs_q.push_back(start);

    while(true)
    {
        int node = bfs_q[0];
        bfs_q.pop_front();
        if(bfs_q.empty()) break;
        
        for(int b = 0; b < farm[node].second.size(); b++)
        {
            if(!check[node])
            {
                bfs_q.push_back(farm[node].second[b]);
                check[farm[node].second[b]] = true;
            }
        }
    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        //초기화
        farm.clear();
        check.fill(false);
        worm = 0;

        //가로
        int m;
        //세로
        int n;
        //갯수
        int k;
        
        cin >> m >> n >> k;
        
        farm.resize(m*n);

        for(int i = 0; i < k; i++)
        {
            //위치
            int x, y;
            cin >> x >> y;
            farm[x].first = 1;
            farm[x].second.push_back(y);
            farm[y].first = 1;
            farm[y].second.push_back(y);
        }

        for(int i = 0; i < m*n; i++)
        {
            if(check[i]) continue;
            
            else
            {
                BFS(i);
                worm++;
            }
        }

        cout << worm << '\n';
    }

    return 0;
}