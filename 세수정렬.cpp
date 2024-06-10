#include <iostream>

using namespace std;

int main()
{
    int num[3];

    for(int i = 0; i < 3; i++)
    {
        cin >> num[i];
    }

    int temp;
    //오름차순 정렬
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            //j의 값이 j+1의 값보다 크다면 바꾸기
            if(num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    for(int o = 0; o < 3; o++) cout << num[o] << " ";
    
    return 0;
}