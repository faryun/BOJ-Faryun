#include <iostream>
#define pi 3.141592
using namespace std;

int main()
{
    cout << fixed;
    cout.precision(6);
    int a, c;
    cin >> c >> a;
    double result = 0;
    result = ((a * pi) * 2) + (c * 2);
    cout << result;
    return 0;
}