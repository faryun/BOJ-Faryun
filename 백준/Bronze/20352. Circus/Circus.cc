#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    
    double perimeter = 2 * sqrt(n * M_PI);
    
    cout<<fixed;
    cout.precision(10);
    cout << perimeter;
    return 0;
}