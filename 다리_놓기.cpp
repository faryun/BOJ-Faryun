#include <iostream>

using namespace std;

double fact(int n)
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
        
        if(n == m) cout << 1 << '\n';
        else
        {
            if(n == 1) cout << m << '\n';
            else printf("%.lf\n", fact(m) / (fact(m-n) * fact(n)));
        }
    }
}