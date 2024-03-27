#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed;
    cout.precision(3);
    
    int n;
    cin >> n;
    vector<double> num;
    for(int i = 0; i < n; i++)
    {
        double input;
        cin >> input;
        num.push_back(input);
    }

    sort(num.begin(),num.end());

    for(int o = 0; o < 7; o++) cout << num[o] << '\n';

    return 0;
}