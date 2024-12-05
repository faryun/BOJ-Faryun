#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> name;
    string str;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        name.push_back(str);
    }

    vector<string> inc = name;
    vector<string> dec = name;

    sort(inc.begin(),inc.end());
    sort(dec.begin(),dec.end(),greater<string>());
    
    bool up = true;
    bool down = true;
    for(int u = 0; u < n; u++)
    {
        if(name[u] != inc[u])
        {
            up = false;
            break;
        }
    }


    for(int d = 0; d < n; d++)
    {
        if(name[d] != dec[d])
        {
            down = false;
            break;
        }
    }

    if(up) cout << "INCREASING";
    else if(down) cout << "DECREASING";
    else cout << "NEITHER";

    return 0;
}