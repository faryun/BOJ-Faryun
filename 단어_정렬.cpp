#include <iostream>
#include <set>
using namespace std;
struct compare
{
    bool operator()(const string& _Left, const string& _Right) const 
    {
        if(_Left.size() == _Right.size()) return _Left < _Right;
        return _Left.size() < _Right.size();
    }
};

int main()
{
    int n;
    string str;
    set<string, compare> num;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        num.insert(str);
    }

    for(auto o : num)
    {
        cout << o << endl;
    }

    return 0;
}