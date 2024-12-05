#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> num;
    int sum[10000001] = {0,};
    int n, m, temp;
    cin >> n >> m;
    num.resize(n + 1);

    for(int i = 1; i <= n; i++)
    {
        cin >> num[i];
    }

    sort(num.begin() + 1, num.end());

    for(int j = 1; j <= n; j++)
    {
        if(j == 1) sum[j] = num[j];
        else sum[j] = sum[j-1] + num[j];
    }

    for(int t = 0; t < m; t++)
    {
        int a, b;
        cin >> a >> b;
        cout << sum[b] - sum[a-1] << '\n';
    }
    return 0;
}