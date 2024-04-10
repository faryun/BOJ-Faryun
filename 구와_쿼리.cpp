#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct point
{
    long long int px;
    long long int py;
    long long int pz;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<point> p;
    long long int n;
    cin >> n;
    p.resize(n);
    for(int i = 0; i < n; i++)
    {
        long long int x, y, z;
        cin >> x >> y >> z;
        p[i].px = x;
        p[i].py = y;
        p[i].pz = z;
    }

    long long int b;
    cin >> b;

    for(int r = 0; r < b; r++)
    {
        long long int result = 0;
        long long int bx, by, bz, rad;
        cin >> bx >> by >> bz >> rad;

        for(int m = 0; m < p.size(); m++)
        {
            if(((bx - p[m].px) * (bx - p[m].px)) + 
            ((by - p[m].py) * (by - p[m].py)) + 
            ((bz - p[m].pz) * (bz - p[m].pz)) <= rad * rad) result++;
        }

        cout << result << '\n';
    }

    return 0;
}