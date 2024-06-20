#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int t = 0; t < T; t++)
    {
        string str;
        cin >> str;

        stack<char> temp;
        for(int i = 0; i < str.size(); i++)
        {
            if(!temp.empty())
            {
                if(temp.top() == '(' && str[i] == ')') temp.pop();
                else temp.push(str[i]);
            }

            else temp.push(str[i]);
        }
        
        if(temp.empty()) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}