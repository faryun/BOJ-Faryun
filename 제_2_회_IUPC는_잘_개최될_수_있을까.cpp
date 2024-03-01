#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int mem;
    int team, person, need;
    int sum = 0;
    int result = 0;
    vector<int> pen;

    cin >> mem;
    cin >> team >> person;
    need = team * person;
    for(int i = 0; i < mem; i++)
    {
        int input;
        cin >> input;
        pen.push_back(input);
    }

    sort(pen.begin(),pen.end(),greater<int>());
    
    for(int p = 0; p < pen.size(); p++)
    {
        sum += pen[p];
        result++;
        if(sum >= need) break;
    }

    if(sum >= need) cout << result << '\n';
    else cout << "STRESS" << endl;
    
    return 0;
}