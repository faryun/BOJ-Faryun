#include <iostream>

using namespace std;

const double PI = 3.14159265358979323846;

int main()
{
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        double a, p1;
        double r, p2;
        cin >> a >> p1;
        cin >> r >> p2;

        double whole = PI * r * r / p2;
        double slice = a / p1;
        if(slice < whole) cout << "Whole pizza" << '\n';
        else cout << "Slice of pizza" << '\n';
    }
    
    return 0;
}