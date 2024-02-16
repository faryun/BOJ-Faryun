#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int sum[100001] = {0,};
    int n, m, num;
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++)
    {
        cin >> num;
        if(i == 1) sum[i] = num;
        else sum[i] = sum[i-1] + num;
    }

    for(int t = 0; t < m; t++)
    {
        int a, b;
        int result = 0;
        cin >> a >> b;
        cout << sum[b] - sum[a-1] << '\n';
    }
    return 0;
}