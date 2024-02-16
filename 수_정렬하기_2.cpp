#include <iostream>

using namespace std;

void Merge(short*, int);

int main()
{
    short num[10000000];
    int n;

    //입력
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }

    //Merge Sort
    Merge(num,n);

    //출력
    for(int o = 0; o < n; o++) printf("%d\n", num[o]);

    return 0;
}

void Merge(short* array, int n)
{
    /*
    리스트의 길이가 1 이하이면 이미 정렬된 것으로 본다. 그렇지 않은 경우에는
    분할(divide): 정렬되지 않은 리스트를 절반으로 잘라 비슷한 크기의 두 부분 리스트로 나눈다.
    정복(conquer): 각 부분 리스트를 재귀적으로 합병 정렬을 이용해 정렬한다. 
    */
    if(n <= 1) return;

    else
    {
        //분할
        //0~5 -> 0~2 / 3~5 -> 0/1/2/3/4/5
        Merge(array, n/2);
        Merge(array + n/2, n - n/2);
        
        //정복
        short *temp = new short[n]();
        short *left, *right;
        
        left = &array[0];
        right = &array[n/2];

        for (int i = 0; i < n; i++)
        {  
            if(left >= &array[n/2])
            {
                while (i < n)
                {
                    temp[i++] = *right;
                    right++;
                }
                break;
            }

            else if(right >= &array[n])
            {   
                while(i < n)
                {
                    temp[i++] = *left;
                    left++;
                }
                break;
            }

            if(*left < *right)
            {
                temp[i] = *left;
                left++;
            }

            else
            {
                temp[i] = *right;
                right++;
            }
        }
        
        for(int j = 0; j < n; j++)
        {
            array[j] = temp[j];
        }

        delete[] temp;
    }
}