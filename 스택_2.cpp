#include <stack>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    stack<int> num;
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        int cmd;
        cin >> cmd;

        if(cmd == 1)
        {
            int input;
            cin >> input;
            num.push(input);
        }

        else if(cmd == 2)
        {
            if(!num.empty())
            {
                cout << num.top() << '\n';
                num.pop();
            }

            else cout << -1 << '\n';
        }

        else if(cmd == 3)
        {
            cout << num.size() << '\n';
        }

        else if(cmd == 4)
        {
            cout << num.empty() << '\n';
        }

        else if(cmd == 5)
        {
            if(!num.empty()) cout << num.top() << '\n';
            else cout << -1 << '\n';
        }
    }
    return 0;
}