#include <iostream>

using namespace std;

int main()
{
    int n, num;
    int max, min;
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        if(i == 0){max = num; min = num;}
        else if(num > max) max = num;
        else if(num < min) min = num;
    }

    cout << min << " " << max;

    return 0;
}