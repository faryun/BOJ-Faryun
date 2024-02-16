#include <iostream>

using namespace std;

int main()
{
    int num, result = 1;
    cin >> num;
    for(int n = num; n >= 1; n--)
    result *= n;
    cout << result << endl;
    return 0;
}