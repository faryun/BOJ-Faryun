#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        long long int n;
        long long int temp = 0;
        vector<long long int> result;
        cin >> n;
        for(long long int i = 1; i <= sqrt(n); i++)
        {
            if(n % i == 0) 
            {
                result.push_back(i);
                if(i != n / i) result.push_back(n / i);
            }
        }
        if(result.size() % 2 != 0) cout << 1 << " ";
        else cout << 0 << " ";
    }    
    return 0;
}