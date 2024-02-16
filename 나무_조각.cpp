#include <iostream>

using namespace std;

void sort(int num[])
{
    int temp;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            //j의 값이 j+1의 값보다 크다면 바꾸기
            if(num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
                for(int i = 0; i < 5; i++) cout << num[i] << " ";
                cout << endl;
            }
        }
    }
}

int main()
{
    int num[5];
    for(int i = 0; i < 5; i++) cin >> num[i];
    sort(num);
    return 0;
}