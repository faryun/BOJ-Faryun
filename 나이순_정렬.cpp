#include <iostream>
#include <set>

using namespace std;
struct compare
{
    bool operator()(const pair<int,string>& _Left, const pair<int,string>& _Right) const 
    {
        if(_Left.first == _Right.first)
        return _Left.first < _Right.first;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    set<pair<int, string>,compare> num;
    int n;
    int age;
    string name;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> age >> name;
        num.insert(make_pair(age,name));    
    }

    for(auto o : num) cout << o.first << " " << o.second << "\n";
}