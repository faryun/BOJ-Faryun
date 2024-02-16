#include <iostream>

using namespace std;

int main()
{
    int x, y, w, h, tempx, tempy;
    cin >> x >> y >> w >> h;

    if(x - 0 > w - x) tempx = w - x;
    else tempx = x - 0;

    if(h - y > y - 0) tempy = y - 0;
    else if(h - y < y - 0) tempy = h - y;

    if(tempx > tempy) cout << tempy << endl;
    else cout << tempx << endl;
    return 0;
}