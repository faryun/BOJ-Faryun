#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool compare(const pair<string, int> &a, const pair<string, int> &b)
{
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<string, int> list;
    int k, l;
    cin >> k >> l;
    for(int i = 0; i < l; i++)
    {
        string num;
        cin >> num;
        if(list.find(num) == list.end()) list.insert(make_pair(num, i));
        else
        {
            auto iter = list.find(num);
            iter->second = i;
        }
    }

    vector<pair<string, int>> sort_list(list.begin(), list.end());
    sort(sort_list.begin(), sort_list.end(), compare);
    
    if(k <= sort_list.size())
    {
        for(int o = 0; o < k; o++)
        {
            cout << sort_list[o].first << '\n';
        }
    }
    else
    {
        for(int o = 0; o < sort_list.size(); o++)
        {
            cout << sort_list[o].first << '\n';
        }
    }
    return 0;
}
