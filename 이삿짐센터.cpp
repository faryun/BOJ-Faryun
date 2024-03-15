#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int result = e;
    
    //5로 만들기
    if((a + d * 4) % 5 != 0) result += (a + d * 4) % 5 + 1;
    else result += (a + d * 4) % 5;

    if((b * 2 + c * 3) % 5 != 0) result += (b * 2 + c * 3) % 5 + 1;
    else result += (b * 2 + c * 3) % 5;
    
    cout << result;
    return 0;
}