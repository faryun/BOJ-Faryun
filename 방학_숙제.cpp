#include <iostream>

using namespace std;

int main()
{
    int day;
    int math, lan;
    int m, l;
    cin >> day;
    cin >> lan >> math;
    cin >> l >> m;

    while (true)
    {
        if(math <= 0 && lan <= 0) break;
        day--;
        math -= m;
        lan -= l;
    }

    cout << day;
    return 0;
}