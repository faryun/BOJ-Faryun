#include <iostream>
#include <set>

using namespace std;
struct compare
{
    bool operator()(const pair<int,int>& _Left, const pair<int,int>& _Right) const 
    {
        if(_Left.second == _Right.second) return _Left.first < _Right.first;
        return _Left.second < _Right.second;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    set<pair<int, int>,compare> num;
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