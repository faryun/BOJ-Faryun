#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    multimap<int, string, greater<int>> res;

    int ln = 0, on = 0, vn = 0, en = 0;
    string name;
    cin >> name;
    for(int i = 0; i < name.size(); i++)
    {
        if(name[i] == 'L') ln++;
        else if(name[i] == 'O') on++;
        else if(name[i] == 'V') vn++;
        else if(name[i] == 'E') en++;
    }

    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        string team;
        cin >> team;
        int lt = 0, ot = 0, vt = 0, et = 0;
        for(int j = 0; j < team.size(); j++)
        {
            if(team[j] == 'L') lt++;
            else if(team[j] == 'O') ot++;
            else if(team[j] == 'V') vt++;
            else if(team[j] == 'E') et++;
        }
        int L = ln + lt;
        int O = on + ot;
        int V = vn + vt;
        int E = en + et;
        int temp = ((L+O) * (L+V) * (L+E) * (O+V) * (O+E) * (V+E)) % 100;

        res.insert(make_pair(temp, team));
    }
    for(auto te : res) cout << te.first  << " " << te.second << endl; 
    
    return 0;
}