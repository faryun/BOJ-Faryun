#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin >> str;
    string r_str = str;
    reverse(r_str.begin(), r_str.end());
    if(str == r_str) cout << 1;
    else cout << 0;
    return 0;
}