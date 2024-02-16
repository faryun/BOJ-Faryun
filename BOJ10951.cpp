#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    while (true)
    {
        cin >> num1 >> num2;
        if(cin.eof()) break;
        cout << num1 + num2 << endl;
    }
    
    return 0;
}
