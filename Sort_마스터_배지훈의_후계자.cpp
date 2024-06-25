#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> num;
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        num.push_back(in);
    }
    
    sort(num.begin(), num.end());

    for(int o = 0; o < m; o++)
    {
        int q;
        cin >> q;
        auto temp = lower_bound(num.begin(), num.end(), q);
        if(temp != num.end())
        {
            if(temp == num.begin())
            {
                if(*temp == q) cout << temp - num.begin() << '\n';
                else cout << -1 << '\n';
            }

            else
            {
                if(*temp == q) cout << temp - num.begin() << '\n';
                else cout << -1 << '\n';
            }
        } 
        else cout << -1 << '\n';
    }

    return 0;
}