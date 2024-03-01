#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for(int t = 0; t < T; t++)
    {
        int size;

        cin >> size;
        string str = "121";
        if(size == 1) cout << "0" << '\n';
        else if(size == 2) cout << "11" << '\n';
        
        else
        {
            while (true)
            {
                if(str.size() == size) break;
                str.insert(2,"2");
            }

            cout << str << '\n';
        }
    }

    return 0;
}