#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int s, k;
    int x = 0, y = 0;
    bool flag = false;
    string str;
    cin >> s >> k;
    cin >> str;
    
    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < s; j++)
        {
            if(str[j] == 'U') y++;
            else if(str[j] == 'D') y--;
            else if(str[j] == 'L') x--;
            else if(str[j] == 'R') x++;

            if(x == 0 && y == 0) flag = true;
        }
    }

    if(flag) cout << "YES";
    else cout << "NO";
    return 0;
}