#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num[10];
    int sum = 0;

    for(int i = 0; i < 10; i++)
    {
        cin >> num[i];
        sum += num[i];
    }
    
    cout << sum / 10 << "\n";

    sort(num,num+10);

    int max = 0, max_t = 1;
    int temp = 0, temp_t = 1;
    for(int j = 0; j < 10; j++)
    {
        if(j == 0) 
        {
            max = num[0];
            temp = num[0];
        }
        else
        {
            if(max == num[j]) max_t++;
            else
            {
                if(temp == num[j]) temp_t++;
                else {
                    temp = num[j];
                    temp_t = 1;
                }
            }
        }

        if(max_t < temp_t)
        {
            max = temp;
            max_t = temp_t;
        }
    }
    
    cout << max << "\n";
    
    return 0;
}