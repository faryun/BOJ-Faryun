#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> num;
    vector<int> zip;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        num.push_back(a);
    }

    zip = num;
    sort(zip.begin(), zip.end());
    zip.erase(unique(zip.begin(),zip.end()),zip.end());

    for(int o = 0; o < n; o++)
    {
        int idx = lower_bound(zip.begin(), zip.end(), num[o]) - zip.begin();
        cout << idx << " ";
    }
    return 0;
}