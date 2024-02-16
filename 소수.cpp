#include <iostream>
#include <sstream>
using namespace std;

int main()
{   
    double a, b, n;
    double div;
    double temp;
    string str;
    cin >> a >> b >> n;
    div = a / b;
    temp = div;
    for(int i = 1; i <= n+1; i++) temp *= 10;
    str = to_string(temp);
    if(div < 1) cout << str[n - 1] << endl;
    else cout << str[n] << endl;
    
    return 0;
}