#include <iostream>
#include <vector>
using namespace std;

struct point
{
    int px;
    int py;
};


int main()
{
    vector<point> p;
    p.resize(3);

    for(int i = 0; i < 3; i++)
    {
        int x, y;
        cin >> x >> y;
        p[i].px = x;
        p[i].py = y;
    }

    if(((p[1].py - p[0].py) / (p[1].px - p[0].px)) == ((p[2].py - p[1].py) / (p[2].px - p[1].px))) cout << "WHERE IS MY CHICKEN?";
    else cout << "WINNER WINNER CHICKEN DINNER!";
    
    return 0;
}