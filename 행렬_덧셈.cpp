#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<array<int,100>,100> arr;
    array<array<int,100>,100> arr2;
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i2 = 0; i2 < n; i2++)
    {
        for(int j2 = 0; j2 < m; j2++)
        {
            cin >> arr2[i2][j2];
        }
    }

    
    for(int o = 0; o < n; o++)
    {
        for(int r = 0; r < m; r++)
        {
            cout << arr[o][r] + arr2[o][r] << " ";
        }

        cout << endl;
    }
    
    return 0;
}