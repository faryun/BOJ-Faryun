#include <iostream>

using namespace std;

int main()
{
    long long int a, b, c, d, k;
    int result = 0;
    bool caught = false;
    cin >> a >> b >> c >> d >> k;
    long long int home, toka = a, doll = a + c;

    //잠시만 이거 수식이다...
    while (true)
    {
        if(b >= 0)
        {
            toka -= b;
            b -= k;
        }
        else toka -= 0;

        doll -= d;

        result++;

        //돌돌이가 토카와 같은 위치에 있거나
        //둘이 동시에 집에 도착하거나
        //돌돌이가 토카를 앞지른 경우
        if(toka >= doll)
        {
            caught = true;
            break;
        }
        
        else if(toka <= 0 && doll <= 0)
        {
            caught = true;
            break;
        }

        else if(toka <= 0) break;
    }
    
    if(caught) cout << -1 << endl;
    else cout << result << endl;

    return 0;
}