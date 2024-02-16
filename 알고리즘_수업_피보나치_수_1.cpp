#include <iostream>
#include <array>

using namespace std;

int result1 = 0;
int result2 = 0;
int fibo(int n)
{
    if(n == 1 || n == 2) 
    {
        result1++;
        return 1;
    }

    else return fibo(n-1) + fibo(n-2);
}

array<int, 41> memo = {0, };

int fibo2(int n)
{
    int index = n - 2;
    int result;
    if(n == 1 || n == 2) return 1;
    if(memo[index]) result = memo[index];
    else
    {
        result2++;
        memo[index] = fibo2(n-1) + fibo2(n-2);
    }

    return result;
}

int main()
{
    int n;
    cin >> n;
    fibo(n);
    fibo2(n);
    cout << result1 << " "<< result2 << '\n';
    return 0;
}