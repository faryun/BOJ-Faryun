#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct player
{
    int num;
    int sum;
    int mult;
};

bool compare(player &a, player &b)
{
    if(a.mult == b.mult)
    {
        if(a.sum == b.sum) return a.num < b.num;
        else return a.sum < b.sum;
    }
    return a.mult < b.mult;
}

int main()
{
    vector<player> p;
    int n;
    cin >> n;
    p.resize(n);
    
    for(int i = 0; i < n; i++)
    {
        int nu, a, b, c;
        cin >> nu >> a >> b >> c;
        p[i].num = nu;
        p[i].sum = a+b+c;
        p[i].mult = a*b*c;
    }

    sort(p.begin(), p.end(), compare);

    for(int o = 0; o < 3; o++) cout << p[o].num << ' ';
    
    return 0;
}