#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        int a, b;
        cin >> a >> b;
        if((a <= 2 && b <= 1) || (a <= 1 && b <= 2)) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }

    return 0;
}