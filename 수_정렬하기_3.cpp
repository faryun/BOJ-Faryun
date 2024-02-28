#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> num;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        num.push_back(input);
    }

    sort(num.begin(),num.end());

    for(auto o : num) cout << o << endl;
    return 0;
}