#include <iostream>

using namespace std;

int main()
{
    int a,b,v;
    int height = 0;
    int day = 0;
    
    cin >> a >> b >> v;

    while (true)
    {
        day++;
        height += a;
        if(height >= v) break;
        height -= b;
    }

    cout << day;
    return 0;
}