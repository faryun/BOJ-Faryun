#include <iostream>

using namespace std;

int main()
{
    int n,sum = 0;
    int min = 101;
    for(int i = 0; i < 7; i++)
    {
        cin >> n;
        if(n % 2 != 0){
            if(n <= min) min = n;
            sum += n;
        }
    }

    if(sum == 0 || min == 101) cout << -1 << endl;
    else cout << sum << endl << min << endl;

    return 0;
}