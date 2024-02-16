#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for(int t = 0; t < T; t++)
    {
        int result = 0;
        string str;
        cin >> str;
        int score = 1;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == 'X') continue;
            else
            {
                if(str[i] == str[i+1]) score++;
                else score = 1;
                result += score;
            }
        }

        cout << result << '\n';
    }
    return 0;
}