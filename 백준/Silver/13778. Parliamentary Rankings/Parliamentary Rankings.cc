#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct people
{
    int id;
    string name;
    int score = 0;
};

bool compare(people &a, people &b)
{
    if(a.score == b.score) return a.id < b.id;
    else return a.score > b.score;
}

int main()
{
    int n;
    cin >> n;
    vector<people> p;
    p.resize(n);

    for(int i = 0; i < n; i++)
    {
        int r;
        string n;
        cin >> r;
        cin.ignore();
        getline(cin, n);
        p[i].id = r;
        p[i].name = n;
    }

    int m;
    cin >> m;
    for(int j = 0; j < m; j++)
    {
        int r;
        string s;
        cin >> r >> s;
        
        for(int t = 0; t < p.size(); t++)
        {
            if(r == p[t].id)
            {
                if(s == "S") p[t].score += 10;
                else if(s == "Q") p[t].score += 5;
                else if(s == "A") p[t].score += 7;
                else if(s == "L") p[t].score -= 8;
                else if(s == "F") p[t].score += 4;
                else if(s == "D") p[t].score -= 5;
                else if(s == "E") p[t].score -= 10;
            }
        }
    }

    sort(p.begin(), p.end(), compare);

    int best = p[0].score;
    int worst = p[n - 1].score;
    
    cout << best << " ";
    for(int o = 0; o < p.size(); o++)
    { 
        if(best == p[o].score) cout << p[o].name << " ";
    }
    cout << '\n';

    cout << worst << " ";
    for(int o = 0; o < p.size(); o++) 
    {
        if(worst == p[o].score) cout << p[o].name << " ";
    }
    cout << '\n';

    return 0;
}