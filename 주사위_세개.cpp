#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    /*
        같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
        같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
        모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.
    */
    if(a == b && b == c && c == a) cout << 10000 + a * 1000 << endl;
    else if(a == b) cout << 1000 + a * 100 << endl;
    else if(b == c) cout << 1000 + b * 100 << endl;
    else if(c == a) cout << 1000 + c * 100 << endl;
    else
    {
        if(a > b && a > c) cout << a * 100 << endl;
        else if(b > a && b > c) cout << b * 100 << endl;
        else cout << c * 100 << endl;
    }
    return 0;
}