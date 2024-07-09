#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    set<int> a;
    set<int> b;

    int n, T;
    cin >> n >> T;
    for(int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        a.insert(in);
    }

    for(int t = 0; t < T; t++)
    {
        int in;
        cin >> in;
        b.insert(in);
    }

    vector<int> res;
    set_difference(a.begin(),a.end(),b.begin(),b.end(),inserter(res,res.begin()));
    
    if(!res.empty())
    {
        cout << res.size() << '\n';
        for(int o = 0; o < res.size(); o++)
        {
            cout << res[o] << " ";
        }
    }

    else cout << 0;
    return 0;
}