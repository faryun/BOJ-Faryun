#include <iostream>

using namespace std;

int factorial(int n)
{
    if(n <= 1) return 1;
    else return n * factorial(n-1);
}

int main()
{
    int T;
    int n, k;
    unsigned long long int result;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> n >> k;
        result = (factorial(n) / (factorial(n - k) * factorial(k))) % 1000000007;
        cout << result << endl;
    }
    
    return 0;
}