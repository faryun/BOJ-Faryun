#include <iostream>

using namespace std;

int main()
{
    string str;
    int a = 0, b = 0;
    int ga = 0, gb = 0;
    cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == 'A') a++;
        else b++;

        if(a > 20)
        {
            cout << a << "-" << b << '\n';
            a = 0;
            b = 0;
            ga++;
        }

        else if(b > 20)
        {
            cout << a << "-" << b << '\n';
            a = 0;
            b = 0;
            gb++;
        }
    }

    if(ga > gb) cout << 'A' << '\n';
    else cout << 'B' << '\n';
    
    return 0;
}