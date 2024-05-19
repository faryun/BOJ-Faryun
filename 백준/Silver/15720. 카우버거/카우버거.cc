#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    vector<int> burger;
    vector<int> side;
    vector<int> drink;

    int sum = 0;
    int sum_r = 0;
    int b, c, d;
    cin >> b >> c >> d;

    for(int i = 0; i < b; i++)
    {
        int bu;
        cin >> bu;
        burger.push_back(bu);
    }
    
    for(int i = 0; i < c; i++)
    {
        int bu;
        cin >> bu;
        side.push_back(bu);
    }

    for(int i = 0; i < d; i++)
    {
        int bu;
        cin >> bu;
        drink.push_back(bu);
    }

    sort(burger.begin(), burger.end(), greater<int>());
    sort(side.begin(), side.end(), greater<int>());
    sort(drink.begin(), drink.end(), greater<int>());

    int temp = min(b, min(c, d));
    
    for(int i = 0; i < burger.size(); i++) sum += burger[i];
    for(int i = 0; i < side.size(); i++) sum += side[i];
    for(int i = 0; i < drink.size(); i++) sum += drink[i];
    for(int i = 0; i < temp; i++) sum_r += (burger[i] + side[i] + drink[i]) * 0.1;

    cout << sum << '\n';
    cout << sum - sum_r << '\n';
    return 0;
}