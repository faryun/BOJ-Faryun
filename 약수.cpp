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
        int temp;
        cin >> temp;
        num.push_back(temp);
    }

    sort(num.begin(),num.end());

    if(num.size() == 1) cout << num[0] * 2;
    else cout << num[0] * num[n-1];
    
    return 0;
}