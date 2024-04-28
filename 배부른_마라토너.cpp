#include <iostream>
#include <set>
#include <algorithm> 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string str;
    multiset<string> name;
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        name.insert(str);
    }

    for(int o = 0; o < n - 1; o++)
    {
        cin >> str;
        name.erase(name.find(str));
    }

    cout << *name.begin();
    
    return 0;
}