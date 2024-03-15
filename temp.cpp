#include <iostream>

using namespace std;

int fact(int n)
{
    if(n <= 1) return n;
    return n * fact(n-1);
}

int main()
{
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        int n, m;
        cin >> n >> m;
        cout << fact(m) / fact(m - n) << '\n';
    }
}