#include <iostream>
#include <array>
using namespace std;

int main()
{
    int n;
    cin >> n;
    array<int,100001> sum = {0,};

    for(int i = 1; i <= n; i++)
    {
        int input;
        cin >> input;
        if(i == 1) sum[i] = input;
        else sum[i] = sum[i-1] + input;
    }

    int m;
    cin >> m;
    for(int o = 0; o < m; o++)
    {
        int start, end;
        cin >> start >> end;
        cout << sum[end+1] - sum[start] << endl;
    }
    return 0;
}