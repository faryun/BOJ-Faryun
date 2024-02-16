#include <iostream>
#include <array>

using namespace std;

array<uint64_t,1000001> memo = {0,};
uint64_t fibo(uint64_t n)
{
    uint64_t index = n - 2;
    uint64_t result = 0;
    if(n < 2) return n;
    
    if(memo[index]) result = memo[index];
    else 
    {
        memo[index] = fibo(n-1) + fibo(n-2);
        result = memo[index];
    }
    return result;
}


int main()
{
    uint64_t n;
    cin >> n;
    cout << fibo(n) % 1000000007 << '\n';
    return 0;
}