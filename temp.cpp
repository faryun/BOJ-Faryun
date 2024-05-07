#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 4> meter = {40, 30, 20, 10};
    int m;
    cin >> m;

    for(int i = 0; i < meter.size(); i++)
    {
        if(m % meter[i] == 0)
        {
            cout << 4 - i;
            break;
        }

        else cout << 1;
    }
    return 0;
}
