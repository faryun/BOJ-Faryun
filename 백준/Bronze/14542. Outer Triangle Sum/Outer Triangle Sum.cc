#include <iostream>

using namespace std;

int main()
{
    int t = 1;
    while (true)
    {
        int n;
        cin >> n;
        int sum = 0;
        if(!n) break;
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                int num;
                cin >> num;
                if(i == n) sum += num;
                else if(j == 0 || j == i - 1) sum += num;
            }
        }

        cout << "Case #"<< t << ":" << sum << endl;
        t++;
    }
    
    return 0;
}