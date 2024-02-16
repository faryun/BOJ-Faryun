#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    set<pair<int, int>> num;
    int n;
    int x,y;

    cin >> n;

    for(int i = 0; i <= n; i++)
    {
        cin >> x >> y;
        num.insert(make_pair(x,y));    
    }

    for(auto o : num) cout << o.first << " " << o.second << "\n";
}