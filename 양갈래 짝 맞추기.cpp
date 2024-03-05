#include <iostream>
#include <cmath>

using namespace std;

int fact(int n)
{
    if(n <= 0) return n;
    return n* fact(n-1);
}

int main()
{
    int n;
    cin >> n;

    
    long long result = fact(n);
    result /= 2 * (n/2);
    result /= fact(n/2);
    cout << result;
    return 0;
}