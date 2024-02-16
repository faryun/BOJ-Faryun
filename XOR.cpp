#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int s,f;
    for(int t = 0; t < T; t++)
    {
        cin >> s >> f;
        int result = 0;
        int sum1 = 0, sum2 = 0;
        for(int i = 1; i < s; i++) sum1 ^= i;
        for(int j = 1; j <= f; j++) sum2 ^= j;
        result = sum1 ^ sum2;
        cout << result << endl;
    }
    return 0;
}