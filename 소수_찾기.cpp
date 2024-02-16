#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, num;
    int result = 0;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        bool isprime;
        cin >> num;

        if(num == 1) isprime = false;
        else if(num == 2) isprime = true;
        else
        {
            for(int j = 2; j < num; j++) 
            {   
                if(num % j == 0) 
                {
                    isprime = false;
                    break;
                }
                else isprime = true;
            }
        }

        if(isprime) result++;
    }
    
    cout << result;
    return 0;
}