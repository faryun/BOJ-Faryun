#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num[9], temp, result;
    for(int i = 0; i < 9; i++) cin >> num[i];
    sort(num,num+9);
    //브루트 포스
    for(int j = 0; j < 9; j++)
    {
        for(int l = 1; l < 9; l++)
        {
            for(int k = 2; k < 9; k++)
            {
                temp = 0;
                if(j == l || j == k || l == k) continue;
                temp += num[j];
                temp += num[l];
                temp += num[k];
                
            }
        }
    }

    return 0;
}