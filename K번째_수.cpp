#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, s;
    vector<int> sorted;
    cin >> n >> s;

    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        sorted.push_back(input);    
    }

    sort(sorted.begin(),sorted.end());

    cout << sorted[s-1];
    return 0;
}