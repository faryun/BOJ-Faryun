#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    string str;
    cin >> T;
    cin.ignore();
    for(int t = 0; t < T; t++)
    {
        int result = 0;
        getline(cin,str);
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] != ' ') result += str[i] - 'A' + 1;
            else continue;
        }

        if(result == 100) cout << "PERFECT LIFE" << "\n";
        else cout << result << "\n";
    }

    return 0;
}