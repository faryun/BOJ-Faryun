#include <iostream>

using namespace std;

int main()
{
    //출력 고정
    cout << fixed;
    cout.precision(3);
    //입력
    int T, n, score[1000];
    cin >> T;

    for(int t = 0; t < T; t++) 
    {
        cin >> n;
        float sum = 0, avg = 0, result = 0, temp = 0;
        
        for(int i = 0; i < n; i++)
        {
            cin >> score[i];
            sum += score[i];
        }   
        //평균 계산
        avg = sum / n;

        //비율 계산
        for(int i = 0; i < n; i++) if(score[i] > avg) temp++;
        result = 100 / (n / temp);
        cout << result << "%" << endl;
    }
    return 0;
}