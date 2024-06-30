#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        string str1, str2;
        cin >> str1 >> str2;
        string s_str1 = str1, s_str2 = str2;
        sort(s_str1.begin(), s_str1.end());
        sort(s_str2.begin(), s_str2.end());

        if(s_str1 == s_str2) cout << str1 << R"( & )" << str2 << " are anagrams." << '\n';
        else cout << str1 << R"( & )" << str2 << " are NOT anagrams." << '\n';
    }
    return 0;
}