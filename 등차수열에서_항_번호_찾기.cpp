#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int i = 1;
    while (true)
    {
        if(b > 0)
        {
            if(a >= c) break;
            a += b;
            i++;
        }

        else
        {
            if(a <= c) break;
            a += b;
            i++;
        }
    }
    if(a == c) cout << i;
    else cout << "X";
    return 0;
}