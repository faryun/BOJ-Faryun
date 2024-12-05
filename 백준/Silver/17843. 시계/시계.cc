#include <iostream>
#include <cmath>

using namespace std;

double minAngle(double angle1, double angle2) 
{
    double diff = fabs(angle1 - angle2);
    return fmin(diff, 360 - diff);
}

int main()
{
    cout << fixed;
    cout.precision(6);
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        int h, m, s;
        cin >> h >> m >> s;
        double hangle = (h % 12 * 30) + (m / 60.0 * 30) + (s / 3600.0 * 30);
        double mangle = m * 6 + (s / 60.0 * 6);
        double sangle = s * 6;

        double hmangle = minAngle(hangle, mangle);
        double hsangle = minAngle(hangle, sangle);
        double msangle = minAngle(mangle, sangle);

        cout << fmin(hmangle,fmin(hsangle,msangle)) << '\n';
    }
    return 0;
}