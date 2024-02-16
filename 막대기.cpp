#include <iostream>

using namespace std;

int main()
{
    int n;
    int height[100000];
    int max;
    int result = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> height[i];
    }

    for(int i = n; i >= 0; i--)
    {
        if(i == n - 1) max = height[i];
        else
        {
            if(max < height[i]) 
            {
                max = height[i];
                result++;
            }
            else continue;
        }
    }

    cout << result << "\n";
    return 0;
}