#include <iostream>

using namespace std;

int main()
{
    unsigned long long int a,b;
    cin >> a >> b;
    int result = 0;
    
    for(int i = a; i <= b; i++)
    {
        result ^= i;
    }

    cout << result << endl;
    return 0;
}