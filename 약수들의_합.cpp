#include <iostream>
#include <vector>
using namespace std;

int main()
{
    while (true)
    {
        vector<int> mod;
        int n;
        int sum = 0;
        cin >> n;
        if(n == -1) break;
        
        for(int i = 1; i < n; i++)
        {
            if(n % i == 0)
            {
                mod.push_back(i);
                sum += i;
            }
        }

        if(sum == n)
        {
            cout << n << " = ";
            for(int o = 0; o < mod.size(); o++)
            {
                if(o == mod.size() - 1) cout << mod[o];
                else cout << mod[o] << " + ";
            }
            cout << '\n';
        }

        else cout << n << " is NOT perfect." << '\n';
    }
    
    return 0;
}