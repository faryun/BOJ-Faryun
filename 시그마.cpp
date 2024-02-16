#include <iostream>

using namespace std;

int main()
{
    int num1, num2, result = 0;
    cin >> num1 >> num2;
    
    for(int i = num1; i <= num2; i++)
    {
        result += i;
    }

    cout << result;
    return 0;
}