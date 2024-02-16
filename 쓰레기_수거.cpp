#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        int car_max, point;
        int p, prev = 0, trash;
        int car = 0;
        int meter = 0;
        cin >> car_max >> point;
        
        for(int i = 0; i < point; i++)
        {
            cin >> p >> trash;
            
            car += trash;
            meter += p - prev;
            prev = p;
            //쓰레기의 양이 용량에 도달했을 때.
            if(car >= car_max)
            {
                cout << "1번 조건" << '\n';
                meter += prev;
                car = 0;
                prev = 0;
            }

            //그 지점의 쓰레기를 실었을 때 쓰레기차의 용량을 넘게 될 때.
            if(car+trash > car_max)
            {
                cout << "2번 조건" << '\n';
                meter += p;
                car = 0;
                prev = 0;
            }
        }

        //더 이상 쓰레기를 실을 지점이 없을 때.
        cout << "3번 조건" << '\n';
        meter += prev;

        cout << meter << '\n';
    }

    return 0;
}