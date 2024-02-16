#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int l,w;
    string name;
    set<string> listen;
    set<string> watch;
    cin >> l >> w;
    for(int i = 0; i < l; i++) 
    {   
        cin >> name;
        listen.insert(name);
    }

    for(int j = 0; j < w; j++) 
    {   
        cin >> name;
        watch.insert(name);
    }

    set<string> result; 
    set_intersection(listen.begin(),listen.end(),watch.begin(),watch.end(),inserter(result,result.begin()));
    
    cout << result.size() << '\n';
    for(auto o : result)
    {
        cout << o << '\n';
    }
    return 0;
}