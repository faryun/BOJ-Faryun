#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string n, m;
    cin >> n >> m;
    bool temp = false;
    reverse(n.begin(),n.end());
    reverse(m.begin(),m.end());
    int sum = stoi(n) + stoi(m);
    
    string result = to_string(sum);
    reverse(result.begin(),result.end());

    for(int i = 0; i < result.size(); i++)
    {
        if(result[i] != '0') temp = true;
        if(temp) cout << result[i];
    }
    return 0;
}