#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        string str;
        cin >> str;
        sort(str.begin(),str.end(),greater<>());
        string subs = str.substr(0, str.length()-1);
        cout << stoll(subs) + str[str.size()-1] - '0' << '\n';
    }

    return 0;
}
