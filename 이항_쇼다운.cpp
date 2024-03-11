#include <iostream>

using namespace std;

long long int fact(long long int n)
{
    if(n <= 1) return 1;
    return n * fact(n-1);
}

int main()
{
    int n, k;
    while (true)
    {
        cin >> n >> k;
        if(n == 0 && k == 0) break;
        cout << fact(n) / (fact(n-k) * fact(k)) << '\n';
    }
    
    return 0;
}