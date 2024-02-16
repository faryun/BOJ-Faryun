#include <iostream>

using namespace std;

int main()
{
    int num[100];
    int n, temp, input;
    
    //입력
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        num[i] = input;
    }

    //오름차순 정렬
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
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

    //출력
    for(int l = 0; l < n; l++)
    {
        cout << num[l] << endl;
    }

    return 0;
}