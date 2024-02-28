#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int,string>& _Left, const pair<int,string>& _Right)
{
    return _Left.first < _Right.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<int, string>> num;
    int n;
    int age;
    string name;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> age >> name;
        num.push_back(make_pair(age,name));    
    }

    stable_sort(num.begin(), num.end(), compare);
    for(auto o : num) cout << o.first << " " << o.second << "\n";
}