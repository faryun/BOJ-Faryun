#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> potato;
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        potato.push_back(n);
    }

    sort(potato.begin(), potato.end());
    int l = 0;
    int r = potato.size() / 2;
    int ls = 0;
    int rs = 0;
    for(int o = 0; o < t; o++)
    {
        if(o < r) ls += potato[o];
        else rs += potato[o];
    }

    cout << ls << " " << rs;
    return 0;
}