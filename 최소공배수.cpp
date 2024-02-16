#include <iostream>

using namespace std;

long long int gcd(long long int n1, long long int n2)
{
    long long int temp = 0;
    if(n2 == 0) return n1;
    while (true)
    {
        if(n1 % n2 == 0) return n2;
        temp = n1 % n2;
        n1 = n2;
        n2 = temp;
    }
}

int main()
{
    long long int n1, n2;
    cin >> n1 >> n2;
    
    if(n1 >= n2) cout << n1 * n2 / gcd(n1, n2);
    else cout << n2 * n1 / gcd(n2, n1);
    return 0;
}