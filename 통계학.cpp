#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    //전처리
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;
    cout.precision(0);

    int n;
    vector<int> num;
    double sum, avg;
   
    //입력
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        num.push_back(input);
        sum += input;
    }

    //정렬
    sort(num.begin(), num.end());

    //산술평균 : N개의 수들의 합을 N으로 나눈 값
    avg = double(sum / n);
    if(avg >= -1 && avg < 0.5f) cout << 0 << "\n";
    else cout << avg << "\n";

    //중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
    cout << num[n/2] << "\n";

    //최빈값 : N개의 수들 중 가장 많이 나타나는 값
    //여러개일 경우 두번째로 작은값
    vector<int> p;
    int max, max_t = 1;
    int temp, temp_t = 1;
    for(int j = 0; j < n; j++)
    {
        if(j == 0)
        {
            max = num[j];
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
            p.clear();
        }

        else if(max_t == temp_t && j != 0)
        {
            p.push_back(num[j]);
        }
    }
    
    p.push_back(max);

    sort(p.begin(),p.end());
    
    if(p.size() == 1) cout << p[0] << '\n';
    else cout << p[1] << '\n';
    
    //범위 : N개의 수들 중 최댓값과 최솟값의 차이
    cout << num[n-1] - num[0] << "\n";

    return 0;
}