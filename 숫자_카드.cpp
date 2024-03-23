#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> num;

    for(int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        num.push_back(in);

    }
    sort(num.begin(),num.end());
    
    int m;
    cin >> m;
    for(int j = 0; j < m; j++)
    {
        int put;
        cin >> put;
        cout << binary_search(num.begin(),num.end(),put) << ' ';
    }
    
    return 0;
}