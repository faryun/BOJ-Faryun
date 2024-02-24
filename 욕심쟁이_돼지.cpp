#include <iostream>
#include <array>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    
    for(int t = 0; t < T; t++)
    {
        array<long long int,7> pig = {0, };
        long long int food;
        long long int day = 1;
        
        cin >> food;
        for(int i = 1; i <= 6; i++) cin >> pig[i];

        while (true)
        {
            array<long long int,7> need;
            long long sum = 0;
            for(int s = 1; s <= 6; s++) sum += pig[s];
            
            if(sum > food) break;

            for(int n = 1; n <= 6; n++)
            {
                need[n] = pig[n];
                if(n == 1) need[n] += pig[2] + pig[4] + pig[6];
                else if(n == 2) need[n] += pig[1] + pig[3] + pig[5];
                else if(n == 3) need[n] += pig[2] + pig[4] + pig[6];
                else if(n == 4) need[n] += pig[3] + pig[5] + pig[1];
                else if(n == 5) need[n] += pig[4] + pig[6] + pig[2];
                else if(n == 6) need[n] += pig[1] + pig[5] + pig[3];
            }
            
            for(int d = 1; d <= 6; d++) pig[d] = need[d];
            
            day++;
        }

        cout << day << '\n';
    }

    return 0;
}