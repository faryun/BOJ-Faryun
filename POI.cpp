#include <iostream>
#include <vector>

using namespace std;

struct player
{
    int id;
    int score;
    int solved;
};

int main()
{
    vector<player> list;
    int n, t, p;
    cin >> n >> t >> p;
    list.resize(n+1);
    for(int i = 1; i <= n; i++)
    {
        int temp = 0;
        for(int j = 0; j < t; j++)
        {
            int s;
            cin >> s;
            if(s) temp++;
        }
    }
    return 0;
}