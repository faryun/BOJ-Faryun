#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num[5];
    int sum = 0;

    for(int i = 0; i < 5; i++)
    {
        cin >> num[i];
        sum += num[i];
    }
    
    cout << sum / 5 << "\n";

    sort(num,num+5);

    cout << num[2] << "\n";
    
    return 0;
}