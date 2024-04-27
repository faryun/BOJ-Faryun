#include <iostream>
#include <deque>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        int time = 1;
        long long int result = 0;
        deque<long long int> price;

        //입력
        while(true)
        {
            int n;
            cin >> n;
            if(!n) break;
            price.push_back(n);
        }
        
        //내립차순 정렬
        sort(price.begin(), price.end(),greater<int>());

        //계산
        for(int p = 0; p < price.size(); p++)
        {
            result += pow(price[p], time) * 2;
            time++;
        }

        //출력
        if(result > 5000000) cout << "Too expensive" << '\n';
        else cout << result << '\n';
    }
    return 0;
}