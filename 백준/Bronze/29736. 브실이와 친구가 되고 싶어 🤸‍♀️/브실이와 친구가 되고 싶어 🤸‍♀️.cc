#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int a, b;
    cin >> n >> m;
    cin >> a >> b;
    int result = 0;
    for(int i = n; i <= m; i++)
    {
        if(a - b <= i && i <= a+b) result++;
    }

    if(result) cout << result;
    else cout << "IMPOSSIBLE";
}