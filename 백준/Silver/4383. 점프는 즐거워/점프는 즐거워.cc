#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> num;
        vector<int> temp;
        bool yn = true;
        
        for(int i = 0; i < n; i++)
        {
            double a;
            cin >> a;
            num.push_back(a);
        }

        if(num.size() > 1)
        {
            for(int j = 0; j < n - 1; j++) temp.push_back(abs(num[j] - num[j+1]));

            sort(temp.begin(),temp.end());

            for(int l = 1; l <= n - 1; l++)
            {
                if(l != temp[l-1])
                {
                    yn = false;
                    break;
                }
            }
        }

        if(yn) cout << "Jolly" << '\n';
        else cout << "Not jolly" << '\n';
    }
    
    return 0;
}