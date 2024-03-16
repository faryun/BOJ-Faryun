#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<array<string,10>,10> str1;
    array<array<string,10>,10> str2;
    bool width = false;
    bool length = false;
    //입력
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cin >> str1[i][j];
            str2[j][i] = str1[i][j];
        }
    }

    //가로줄
    for(int w = 0; w < 10; w++)
    {
        for(int d = 0; d < 10; d++)
        {
            if(str1[w][0] == str1[w][d]) width = true;
            else 
            {
                width = false;
                break;
            }
        }
        if(width) break;
    }

    //세로줄
    for(int l = 0; l < 10; l++)
    {
        for(int e = 0; e < 10; e++)
        {
            if(str2[l][0] == str2[l][e]) length = true;
            else 
            {
                length = false;
                break;
            }
        }
        if(length) break;
    }
    
    if(width || length) cout << 1;
    else cout << 0;
    return 0;
}