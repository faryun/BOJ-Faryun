#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 6> coin = {500, 100, 50, 10, 5, 1}; 
    int n;
    cin >> n;
    int charge = 1000 - n;
    int result = 0;
    
    for(int i = 0; i < coin.size(); i++)
    {
        if(charge == 0) break;
        result += charge / coin[i];
        charge -= (charge / coin[i]) * coin[i];
    }

    cout << result;
    return 0;
}