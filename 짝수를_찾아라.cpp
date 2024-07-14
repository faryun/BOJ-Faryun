#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        int sum = 0;
        int min = 0;
        for(int i = 0; i < 7; i++)
        {
            int n;
            cin >> n;
            if(n % 2 == 0)
            {
                sum += n;
                if(min == 0) min = n;
                else
                {
                    if(min > n) min = n;
                }
            }
        }
        cout << sum << " " << min << '\n';
    }
    return 0;
}