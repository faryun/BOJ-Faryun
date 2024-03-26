#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<string, int>> power;
    
    for(int i = 0; i < n; i++)
    {
        string str;
        int pow;
        cin >> str >> pow;
        power.push_back(make_pair(str,pow));
    }
    
    for(int o = 0; o < m; o++)
    {
        int temp;
        cin >> temp;

        for(int p = 0; p < power.size(); p++)
        {
            if(temp <= power[p].second)
            {
                cout << power[p].first << '\n';
                break;
            }
        }
    }

    return 0;
}