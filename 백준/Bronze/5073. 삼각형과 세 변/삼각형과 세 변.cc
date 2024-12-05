#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int max, sum;
    while (true)
    {
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;
        
        if(a > b && a > c)
        {
            max = a;
            sum = b+c;
        }
        
        else if (b > c)
        {
            max = b;
            sum = a+c;
        }

        else
        {
            max = c;
            sum = a+b;
        }

        if(max >= sum) cout << "Invalid" << '\n';
        else if(a == b && b == c) cout << "Equilateral" << '\n';
        else if((a == b) or (b == c) or (a == c)) cout << "Isosceles" << '\n';
        else cout << "Scalene" << '\n';
    }
     
    return 0;
}