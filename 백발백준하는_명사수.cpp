#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, r1;
    double x2, y2, r2;
    double d;
    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;
    
    d = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    
    if(r1 - r2 < d && d < r1 + r2) cout << "YES";
    else if(r1 - r2 == d) cout << "YES";
    else if(r1 - r2 > d) cout << "YES";
    else if(d == 0) cout << "YES";
    else cout << "NO";

    return 0;
}