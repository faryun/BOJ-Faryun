#include <iostream>

using namespace std;

int main()
{
    int num;
    int temp = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> num;
        temp += (num * num);
    }

    cout << temp % 10 << endl;
    return 0;
}
