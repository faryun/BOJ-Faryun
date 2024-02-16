#include <iostream>

using namespace std;

int main()
{
    int a,b,v;
    int height = 0;
    int day = 0;

    cin >> a >> b >> v;

    day = (v - b) / (a - b);
    if ((v - b) % (a - b) != 0) day++;
    
    cout << day << endl;
    return 0;
}