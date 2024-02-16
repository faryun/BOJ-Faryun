#include <iostream>
using namespace std;

int main()
{
    int s, e;
    cin >> s >> e;
    long long int result;
    for(int i = s; i <= e; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            result += s * i;
        }
    }
    
    cout << result << endl;
    return 0;
}