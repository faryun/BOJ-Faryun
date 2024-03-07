#include <iostream>

using namespace std;

int main()
{
    int n;
    int counter = 0;
    cin >> n;
    for(int i = n - 1; i <= 1; i--)
    {
        counter++;
        if(n % i == 0) break;
    }
    
    cout << counter;
    return 0;
}