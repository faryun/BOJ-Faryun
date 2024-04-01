#include <iostream>

using namespace std;

int main()
{
    int x, n;
    int m;
    int result = 0;
    cin >> x >> n;
    
    if(n % 2 != 0 && n != 1) cout << "ERROR";
    else if((n == 0 && x >= 1) || (n == 1 && x <= -1)) cout << "INFINITE";
    else if((n == 1 && x >= 1) || x <= 0) cout << 0;
    else
    {
        m = n / 2;
        while (x > 0)
        {
            for (int i = 0; i < m; i++)
		    {
			    --x;
		    }
            if(x > 0) result++;
        }

        cout << result;
    }

    return 0;
}