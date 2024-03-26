#include <iostream>

using namespace std;

long long int gcd(long long int n1, long long int n2)
{
    long long int temp;
    while (true)
    {
        if(n2 == 0) break;
        temp = n1 % n2;
        n1 = n2;
        n2 = temp;
    }

    return n1;
}


int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int T;
    cin >> T;
    
    for(long long int t = 0; t < T; t++)
    {
        long long int n, m;
        cin >> n >> m;
        cout << n * m / gcd(n,m) << '\n';
    }

    return 0;
}