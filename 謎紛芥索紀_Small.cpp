#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int sum = 0;
    for(int t = 0; t < T; t++)
    {
        int n, m;
        cin >> n >> m;
        sum += n * m;
    }

    cout << sum;
    return 0;
}