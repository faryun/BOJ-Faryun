#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string str[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    string temp;
    unsigned long long result = 0;

    for(int i = 0; i < 3; i++)
    {
        cin >> temp;
        for(int j = 0; j < 10; j++){
            if(i == 0)
            {
                if(temp == str[j]) result += (j * 10);
            }

            else if(i == 1)
            {
                if(temp == str[j]) result += j;
            }
            
            else if(i == 2)
            {
                if(temp == str[j]) result *= pow(10, j);
            }
        }
    }

    printf("%lld", result);
    return 0;
}