#include <iostream>
#include <array>

using namespace std;

array<uint64_t,1001> memo = {0, 1, 2,};

uint64_t tile(uint64_t n)
{
    if(!memo[n])
    {
        memo[n] = (tile(n-1) + tile(n-2)) % 10007;
    }

    return memo[n];
}

int main()
{
    int n;
    cin >> n;
    cout << tile(n);
    return 0;
}