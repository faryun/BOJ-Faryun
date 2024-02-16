#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string name, command;
    set<string,greater<string>> people;

    cin >> n;
    for(int i = 0; i < n; i++) 
    {
        cin >> name >> command;
        if(command == "enter") people.insert(name);
        else if(command == "leave") people.erase(name);
    }
    
    for(auto r : people) cout << r << '\n';
    return 0;
}