#include <iostream>

using namespace std;

int main()
{
    cout<<fixed;
    cout.precision(1);
    double a, b;
    cin >> a >> b;
    cout << (a * b) / 2;
    return 0;
}