#include <iostream>
#include <array>

using namespace std;

array<uint64_t,120> memo = {0, 1, 1, 1, };

uint64_t wave(uint64_t n)
{
    uint64_t index = n;
    uint64_t result;
    if(n < 3) return 1;
    if(memo[index]) result = memo[index];
    else
    {
        memo[index] = wave(n-2) + wave(n-3);
        result = memo[index];
    }

    return result;
}

int main()
{
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        int n;
        cin >> n;
        cout << wave(n) << endl;
    }
    return 0;
}