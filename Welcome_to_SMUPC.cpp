#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str = "WelcomeToSMUPC";

    int temp = n % 14;
    if(temp - 1 != -1) cout << str[temp - 1];
    else cout << str[13];
    return 0;
}