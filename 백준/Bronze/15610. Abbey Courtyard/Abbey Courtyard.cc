#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout<<fixed;
    cout.precision(8);
    long long int n;
    cin >> n;
    double r = sqrtl(n) * 4;
    cout << r;
    return 0;
}