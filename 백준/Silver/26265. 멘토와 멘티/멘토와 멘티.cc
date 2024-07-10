#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct people
{
    string mentor;
    string mentee;
};

bool sorting(people &a, people &b)
{
    if(a.mentor == b.mentor) return a.mentee > b.mentee;
    else return a.mentor < b.mentor;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<people> p;
    int n;
    cin >> n;
    p.resize(n);
    
    for(int i = 0; i < n; i++)
    {
        string tor, tee;
        cin >> tor >> tee;
        p[i].mentor = tor;
        p[i].mentee = tee;
    }

    sort(p.begin(), p.end(), sorting);

    for(int o = 0; o < n; o++)
    {
        cout << p[o].mentor << " " << p[o].mentee << '\n';
    }
    return 0;
}
