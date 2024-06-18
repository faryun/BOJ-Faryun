#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int a = 0, b = 0;
    for(int t = 0; t < T; t++)
    {
        int n1, n2;
        cin >> n1 >> n2;

        if(n1 > n2) a += n1 + n2;
        else if(n2 > n1) b += n1 + n2;
        else 
        {
            a += n1;
            b += n2;
        }
    }
    
    cout << a << ' ' << b;
    return 0;
}