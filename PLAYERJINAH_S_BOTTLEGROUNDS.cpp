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

    double line1x = p[1].px - p[0].px;
    double line1y = p[1].py - p[0].py;
    double line2x = p[2].px - p[1].px;
    double line2y = p[2].py - p[1].py;
    
    //3점의 x좌표가 같으면
    if((p[1].px == p[0].px) && (p[2].px == p[1].px) && (p[2].px == p[0].px)) cout << "WHERE IS MY CHICKEN?";
       
    //3점의 y좌표가 같으면
    else if((p[1].py == p[0].py) && (p[2].py == p[1].py) && (p[2].py == p[0].py)) cout << "WHERE IS MY CHICKEN?";
        
    //기울기의 분모가 0이 아닐때
    else if(line1x && line2x)
    {
        //기울기가 같다면
        if((line1y / line1x) == (line2y / line2x)) cout << "WHERE IS MY CHICKEN?";
        else cout << "WINNER WINNER CHICKEN DINNER!";
    }

    else
    {
        //기울기의 분자가 같다면
        if(line1x != line2x) cout << "WINNER WINNER CHICKEN DINNER!";
        else if(line1y == line2y) cout << "WHERE IS MY CHICKEN?";
        else cout << "WINNER WINNER CHICKEN DINNER!";
    }

    return 0;
}