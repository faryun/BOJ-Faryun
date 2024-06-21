#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    queue<int> num;
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        string str;
        cin >> str;
        
        if(str == "push")
        {
            int n;
            cin >> n;
            num.push(n);
        }

        else if(str == "pop")
        {
            if(!num.empty())
            {
                cout << num.front() << '\n';
                num.pop();
            }

            else cout << -1 << '\n';
        }

        else if(str == "empty")
        {
            cout << num.empty() << '\n';
        }

        else if(str == "front")
        {
            if(!num.empty()) cout << num.front() << '\n';
            else cout << -1 << '\n';
        }

        else if(str == "back")
        {
            if(!num.empty()) cout << num.back() << '\n';
            else cout << -1 << '\n';
        }

        else if(str == "size")
        {
            cout << num.size() << '\n';
        }
    }
    return 0;
}