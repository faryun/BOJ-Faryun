#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<long long int> num;
    int n;
    cin >> n;
    string str;
    
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        reverse(str.begin(),str.end());
        num.push_back(stoll(str));
    }
    sort(num.begin(),num.end());

    for(auto o : num) cout << o << '\n';

    return 0;
}