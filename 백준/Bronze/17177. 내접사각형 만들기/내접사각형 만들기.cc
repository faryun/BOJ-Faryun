#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int ad, ab, cd;
    cin >> ad >> ab >> cd;
    int bd2 = (ad * ad) - (ab * ab);
    int ac2 = (ad * ad) - (cd * cd);
    
    int bc = (sqrt(ac2 * bd2) - (ab * cd)) / ad;
    
    //내각사각형이 만들어지지 않는 조건 a^2 + b^2 >= c^2;
    if(bc <= 0) cout << -1;
    else cout << bc;
    return 0;
}