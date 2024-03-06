#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int,4> coin = {7, 5, 2, 1};
    int charge;
    int result = 0;
    
    cin >> charge;

    for(int i = 0; i < coin.size(); i++)
    {
        if(charge == 0) break;
        result += charge / coin[i];
        charge -= (charge / coin[i]) * coin[i];
    }

    cout << result;
    return 0;
}