#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for(int t = 0; t < T; t++)
    {
        long long int n;
        cin >> n;
        long long int temp;
        temp = sqrtl(n);

        if(sqrtl(n) == temp) cout << 1 << " ";
        else cout << 0 << " ";
    }

    return 0;
}