#include <iostream>

using namespace std;

const double PI = 3.14159265358979323846;

int main()
{
    double a, p1;
    double r, p2;
    cin >> a >> p1;
    cin >> r >> p2;

    double whole = PI * r * r / p2;
    double slice = a / p1;
    if(slice < whole) cout << "Whole pizza";
    else cout << "Slice of pizza";
    
    return 0;
}