#include <iostream>

using namespace std;

int main()
{
    int price, item, money, result;
    cin >> price >> item >> money;
    
    if(price * item > money) result = price * item - money;
    else result = 0;

    cout << result << endl;
    return 0;
}