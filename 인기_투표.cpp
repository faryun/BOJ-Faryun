#include <iostream>
#include <array>
using namespace std;

int main()
{
    int T;
    cin >> T;
    array<int,10> vote;
    for(int t = 0; t < T; t++)
    {
        int n, win, sum = 0, winner, check = 0;
        cin >> n;
        
        for(int i = 0; i < n; i++)
        {
            cin >> vote[i];
            sum += vote[i];
            if(i == 0) win = vote[i];
            else if(vote[i] > win) win = vote[i];
        }

        for(int j = 0; j < n; j++)
        {
            if(win == vote[j])
            {
                check++;
                winner = j+1;
            }
        }

        if(check > 1) cout << "no winner" << '\n';
        else if(win > sum / 2) cout << "majority winner " << winner << '\n';
        else cout << "minority winner " << winner << '\n';
    }

    return 0;
}