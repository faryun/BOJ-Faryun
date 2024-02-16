#include <iostream>

using namespace std;

int main()
{
    int n;
    int score[5] = {0, };
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> n;
            score[i] += n;
        }
    }

    int winner, win_s;
    for(int w = 0; w < 5; w++)
    {
        if(w == 0) 
        {
            winner = w;
            win_s = score[0];
        }

        else
        {
            if(win_s < score[w])
            {
                winner = w;
                win_s = score[w];
            }
        }
    }

    cout << winner + 1 << " " << win_s;
    
    return 0;
}