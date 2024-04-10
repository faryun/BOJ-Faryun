#include <iostream>
#include <vector>

using namespace std;

struct point
{
    int px;
    int py;
    int pz;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<point> p;
    int n;
    cin >> n;
    p.resize(n);
    for(int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        p[i].px = x;
        p[i].py = y;
        p[i].pz = z;
    }

    int b;
    cin >> b;

    for(int r = 0; r = b; r++)
    {
        int result = 0;
        int bx, by, bz, rad;
        cin >> bx >> by >> bz >> rad;
        cout << result << '\n';
    }
    return 0;
}