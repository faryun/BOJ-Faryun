#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    vector<int> num;

    for(int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        num.push_back(in);
    }

    for(int i = 0; i < m; i++)
    {
        int in;
        cin >> in;
        num.push_back(in);
    }
    
    sort(num.begin(), num.end());

    for(auto o : num) cout << o << " "; 
    return 0;
}