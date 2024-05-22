#include <iostream>
#include <array>

using namespace std;

array<uint64_t,120> memo = {0,};

uint64_t fibo(uint64_t n)
{
    uint64_t index = n - 3;
    uint64_t result;
    if(n <= 3) return 1;
    if(memo[index]) result = memo[index];
    else
    {
        memo[index] = fibo(n-1) + fibo(n-3);
        result = memo[index];
    }

    return result;
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}