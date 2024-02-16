#include <iostream>

using namespace std;

int main() 
{
    int resp;
    int A,B;
    for(int a=1; a<=9; a++)
    {
        std::cout << "? A " << a << std::endl;
        std::cin >> resp;

        if(resp == 1)
        {
            A = a;
            break;
        }
    }
     for(int b=1; b<=9; b++)
     {
        std::cout << "? B " << b << std::endl;
        std::cin >> resp;

        if(resp == 1)
        {
            B = b;
            break;
        }
     }
     
    std::cout << "! " << A + B;
}