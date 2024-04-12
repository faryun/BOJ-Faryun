#include <iostream> 
#define pi 3.14159265358979
using namespace std;

int main()
{
    cout<<fixed;
    cout.precision(6);
    double r;
    cin >> r;
    cout << pi * (r*r) << '\n';
    cout << (r*r) * 2 << '\n';
    return 0;
}