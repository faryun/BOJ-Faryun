#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

struct ISIS
{
    string str;
    int id;
    int index;
};

bool compare(ISIS &a, ISIS &b)
{
    return a.id < b.id;
}

int main()
{
    vector<ISIS> is;
    int T;
    cin >> T;
    is.resize(T);
    for(int t = 0; t < T; t++)
    {
        string s;
        int i, idx;
        cin >> s >> i >> idx;

        is[t].str = s;
        is[t].id = i;
        is[t].index = idx;
    }

    sort(is.begin(), is.end(), compare);
    
    string result;
    for(int o = 0; o < T; o++)
    {
        if(islower(is[o].str[is[o].index - 1])) result += is[o].str[is[o].index - 1] - 32;
        else result += is[o].str[is[o].index - 1];
    }

    cout << result;
    return 0;
}