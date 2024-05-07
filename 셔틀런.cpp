#include <iostream>
#include <array>

using namespace std;

int main()
{
    int m;
    cin >> m;

    int temp = m % 100;

    if(temp == 0) cout << 0;
    else if(temp <= 5) cout << 1;
    else if(temp <= 10) cout << 1;
    else if(temp <= 15) cout << 1;
    else if(temp <= 20) cout << 2;
    else if(temp <= 25) cout << 2;
    else if(temp <= 30) cout << 1;
    else if(temp <= 35) cout << 1;
    else if(temp <= 40) cout << 2;
    else if(temp <= 45) cout << 3;
    else if(temp <= 50) cout << 3;
    else if(temp <= 55) cout << 2;
    else if(temp <= 60) cout << 1;
    else if(temp <= 65) cout << 1;
    else if(temp <= 70) cout << 2;
    else if(temp <= 75) cout << 3;
    else if(temp <= 80) cout << 4;
    else if(temp <= 85) cout << 4;
    else if(temp <= 90) cout << 3;
    else if(temp <= 95) cout << 2;
    else cout << 1;
    return 0;
}
