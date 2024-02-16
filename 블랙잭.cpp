#include <iostream>

using namespace std;

int main()
{
    //입력
    int n, m, result = 0, temp = 0;
    int cards[100];
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> cards[i];

    //브루트 포스
    for(int j = 0; j < n; j++)
    {
        for(int l = 1; l < n; l++)
        {
            for(int k = 2; k < n; k++)
            {
                temp = 0;
                if(j == l || j == k || l == k) continue;
                temp += cards[j];
                temp += cards[l];
                temp += cards[k];
                if(temp <= m && temp >= result) result = temp;
            }
        }
    }

    cout << result << endl;

    return 0;
}