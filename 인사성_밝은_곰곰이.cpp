#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    set<string> id;
    int T;
    cin >> T;
    int result = 0;
    for(int t = 0; t < T; t++)
    {
        string chat;
        cin >> chat;

        if(chat == "ENTER") id.clear();
        else if(id.find(chat) == id.end())
        {
            result++;
            id.insert(chat);
        }
    }

    cout << result << '\n';
    return 0;
}