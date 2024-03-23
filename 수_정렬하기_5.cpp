#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> num;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        num.push_back(input);
    }

    sort(num.begin(), num.end());
    
    for(auto r : num) cout << r << '\n';
    return 0;
}