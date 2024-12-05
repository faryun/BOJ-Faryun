#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct player
{
    int classes;
    string name;
};

bool compare(player &a, player &b)
{
    if(a.classes == b.classes)
    {
        if(a.name.length() == b.name.length()) return a.name < b.name;
        return a.name.length() < b.name.length();
    }
    return a.classes < b.classes;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<player> blue;
    vector<player> white;
    vector<int> check;
    check.resize(n+1);
    blue.resize(5000);
    white.resize(5000);
    
    int i = 0;
    
    while (true)
    {
        int c;
        string na;
        cin >> c >> na;
        if(c == 0 && na == "0") break;
        check[c]++;
        if(check[c] <= m)
        {
            //청팀
            if(c % 2 != 0)
            {
                blue[i].classes = c;
                blue[i].name = na; 
            }
            //백팀
            else
            {
                white[i].classes = c;
                white[i].name = na;
            }
            i++;
        }
    }
    
    sort(blue.begin(), blue.end(), compare);
    sort(white.begin(), white.end(), compare);

    for(auto b : blue) if(b.classes) cout << b.classes << " " << b.name << endl;
    for(auto w : white) if(w.classes) cout << w.classes << " " << w.name << endl;

    return 0;
}