#include <iostream>

using namespace std;

int main()
{
    long long int a, b, c, result;
    cin >> a >> b >> c;
    
    if(b >= c) result = -1;
    else result = (a / (c - b)) + 1;

    cout << result << endl;
    return 0;
}