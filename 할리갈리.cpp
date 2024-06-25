#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> fruit;
    int n;
    bool flag = false;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string s;
        int t;
        cin >> s >> t;
        if(fruit.find(s) != fruit.end()) fruit[s] += t;
        else fruit.insert(make_pair(s, t));
    }

    for(auto o : fruit)
    {
        if(o.second == 5)
        {
            flag = true;
            break;
        }
    }

    if(flag) cout << "YES";
    else cout << "NO";
    return 0;
}