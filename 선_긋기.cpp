#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct point
{
    int pa;
    int pb;
};

bool compare(const point& p1, const point& p2)
{
    if(p1.pa == p2.pa) return p1.pb < p2.pb;
    return p1.pa < p2.pa;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int s, e;
    vector<point> p;
    p.resize(n);

    long long int lenth = 0;
    
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        p[i].pa = a;
        p[i].pb = b;
    }
    
    sort(p.begin(),p.end(),compare);

    for(int o = 0; o < p.size(); o++)
    {
        if(o == 0)
        {
            s = p[o].pa;
            e = p[o].pb;
        }
        
        //시작점이 이미 그려진 선 내부
        else if(s <= p[o].pa && p[o].pa <= e)
        {
            if(p[o].pb > e) e = p[o].pb;
        }

        //그려진 선 끝점에 맞닿아 있을떄
        else if(p[o].pa == s || p[o].pb == e)
        {
            if(p[o].pa < s) s = p[o].pa;
            if(p[o].pb > e) e = p[o].pb;
        }

        else
        {
            lenth += e - s;
            s = p[o].pa;
            e = p[o].pb;
        } 
    }

    lenth += e - s;

    cout << lenth;
    
    return 0;
}