#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct point
{
    int px;
    int py;
};
int cx, cy;

bool compare(const point& p1, const point& p2)
{
    if(p1.px - cx == p2.px - cx) return p1.py - cy < p2.py - cy;
    return p1.px - cx < p2.px - cx;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    int result = 0;
    vector<point> p;
    p.resize(3);
    cin >> cx >> cy;

    for(int i = 0; i < 3; i++)
    {
        cin >> x >> y;
        p[i].px = x;
        p[i].py = y;
    }

    sort(p.begin(), p.end(), compare);

    for(int s = 0; s < 3; s++)
    {
        if(cx == p[s].px)
        {
            result += p[s].py - cy;
            cy = p[s].py;
        }

        else if(cy == p[s].py)
        {
            result += p[s].px - cx;
            cx = p[s].px;
        }
        
        else
        {
            result += p[s].px - cx;
            result += p[s].py - cy;
            cx = p[s].px;
            cy = p[s].py;
        }
    }

    cout << result << '\n';

    return 0;
}