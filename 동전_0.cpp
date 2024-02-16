#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    int coin[10];
    int result = 0;
    cin >> n >> k;

    for(int i = 0; i < n; i++) cin >> coin[i];
    
    for(int i = n - 1; i >= 0; i--)
    {
        if(coin[i] > k) continue;
        else 
        {
            result += k / coin[i];
            k -= coin[i] * (k / coin[i]);
        }
    }

    cout << result << '\n';

    return 0;
}