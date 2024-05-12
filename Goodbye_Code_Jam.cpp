#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int t = 1; t <= T; t++)
    {
        int n;
        cin >> n;
        
        if(n > 4500) cout << "Case #" << t << ": Round 1" << '\n';
        else if(n > 1000) cout << "Case #" << t << ": Round 2" << '\n';
        else if(n > 25) cout << "Case #" << t << ": Round 3" << '\n';
        else cout << "Case #" << t << ": World Finals" << '\n';
    }
    return 0;
}