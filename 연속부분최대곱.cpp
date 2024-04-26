#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    double sum[100001] = {0,};
    double n, num;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        cin >> num;
        if(i == 1) sum[i] = num;
        else sum[i] = sum[i-1] * num;
    }

    int a = 1, b = n;
    for(int t = 1; t <= n; t++)
    {
        cout << sum[t] << '\n';
    }
    return 0;
}