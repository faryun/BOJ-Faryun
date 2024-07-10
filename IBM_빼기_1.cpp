#include <iostream>

using namespace std;

int main()
{
    string str;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> str;
        cout << "String #" << i << '\n';
        for(int j = 0; j < str.size(); j++)
        {
            char c;
            c = str[j];
            if(c != 'Z') c += 1;
            else c = 'A';
            cout << c;
        }
        cout << '\n';
        cout << '\n';
    }
    return 0;
}