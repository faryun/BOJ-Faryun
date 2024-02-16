#include <iostream>

using namespace std;

int main()
{
    int N, limit, LIMIT, power, rest;
    int pulse, time = 0;
    cin >> N >> limit >> LIMIT >> power >> rest;
    
    pulse = limit;

    //운동을 한번도 못할 경우 예외처리
    if(pulse + power > LIMIT) cout << -1 << endl;

    else
    {
        while(true)
        {
            //운동 완료시 break
            if(N <= 0) break;

            //운동
            if(pulse + power <= LIMIT)
            {
                pulse += power;
                N--;
                time++;
            }

            //휴식
            else if(pulse - rest > limit)
            {
                pulse -= rest;
                time++;
            }

            //맥박 최저 보정
            else
            {
                pulse = limit;
                time++;
            }
        }

        cout << time << endl;
    }

    return 0;
}