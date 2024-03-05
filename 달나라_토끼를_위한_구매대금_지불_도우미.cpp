#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int,4> coin = {7, 5, 2, 1};
    int charge;
    cin >> charge;
    int temp;
    int result = 0;

    for(int i = 0; i < coin.size(); i++)
    {
        if(charge == 0) break;
        cout << charge << " " << result << endl;
        result += charge / coin[i];
        charge -= (charge / coin[i]) * coin[i];
    }

    cout << result;
    return 0;
}