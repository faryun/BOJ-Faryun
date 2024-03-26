#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> num;

    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        num.push_back(input);
    }

    sort(num.begin(),num.end(),greater<int>());

    for(auto o : num) cout << o << '\n';
    return 0;
}