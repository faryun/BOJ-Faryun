#include <iostream>

using namespace std;

int main()
{
    int sec = 0;
    int temp = 0;
    for(int i = 0; i < 4; i++)
    {
        cin >> temp;
        sec += temp;
    }

    cout << sec / 60 << endl;
    cout << sec % 60 << endl;
    return 0;
}