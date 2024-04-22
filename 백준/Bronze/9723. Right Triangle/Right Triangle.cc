#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t = 1; t <= T; t++)
    {
        int a, b, c;
        int max;
        bool yn = false;
        cin >> a >> b >> c;
        if (a > b && a > c)
        {
            if((b * b) + (c * c) == a * a) yn = true;
            else yn = false;
        }
        else if(b > c)
        {
            if((a * a) + (c * c) == b * b) yn = true;
            else yn = false;
        }
        else
        {
            if((b * b) + (a * a) == c * c) yn = true;
            else yn = false;
        }

        if(yn) cout << "Case #" << t <<": YES" << '\n';
        else cout << "Case #" << t <<": NO" << '\n';
    }
    return 0;
}