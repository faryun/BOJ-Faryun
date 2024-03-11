#include <iostream>
#include <vector>
#include <array>
#include <deque>

using namespace std;

//지렁이
int worm = 0;
//가로
int m;
//세로
int n;

int farm[50][50];

void DFS(int x, int y)
{
    if(x < 0 || y < 0 || x > m || y > n || farm[x][y]) return;
    worm++;
    DFS(x-1, y);
    DFS(x, y-1);
    DFS(x+1, y);
    DFS(x, y+1);
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
        for(int c = 0; c < 50; c++)
        {
            for(int l = 0; l < 50; l++)
            {
                farm[c][l] = 0;
            }
        }
        worm = 0;

        //갯수
        int k;
        
        cin >> m >> n >> k;
        
        for(int i = 0; i < k; i++)
        {
            //위치
            int x, y;
            cin >> x >> y;
            farm[x][y] = 1;
        }

        //탐색
        DFS(1, 1);
        cout << worm << '\n';
    }

    return 0;
}