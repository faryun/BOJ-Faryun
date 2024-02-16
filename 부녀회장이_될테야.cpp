#include <iostream>

using namespace std;

int main()
{
    //입력
    int T,k,n,temp;
    int p1[14], p2[14] = {0,};
    cin >> T;
    
    for(int t = 0; t < T; t++)
    {
        cin >> k >> n;
        for(int i = 0; i < k; i++)
        {
            for(int j = 0; j < n; j++)
            {
                //사람수 계산
                int person = 1;
                if(i == 0) //0층
                {
                    if(j == 0) p1[j] = person;
                    else p1[j] = person + p1[j-1];
                    person++;
                }

                //1층 이상
                //“a층의 b호에 살려면 자신의 아래(a-1)층의 1호부터 b호까지 사람들의 수의 합만큼 사람들을 데려와 살아야 한다”
                if(j == 0) p2[j] = p1[j];
                else
                {
                    p2[j] += p1[j];
                    temp = p2[j];
                    p1[j] = temp;
                }
            }
        }

        //출력
        cout << p2[n] << endl;
    }
}