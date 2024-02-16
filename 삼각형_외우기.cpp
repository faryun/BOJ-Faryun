#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    if(a+b+c == 180 && a == 60 && b == 60 && c == 60) cout << "Equilateral" << endl;
    else if(a+b+c == 180 && (a == b || a == c || b == c)) cout << "Isosceles" << endl;
    else if(a+b+c == 180 && a != b && b != c && a != c) cout << "Scalene" << endl;
    else cout << "Error" << endl;
    
    return 0;
}