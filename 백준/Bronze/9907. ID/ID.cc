#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<char, 11> c = {'J', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'Z'};
    array<int, 7> x = {2, 7, 6, 5, 4, 3, 2};
    
    string n;
    int sum = 0;
    cin >> n;

    for(int i = 0; i < 7; i++) sum += (n[i] - '0') * x[i];
    
    cout << c[sum % 11];
    return 0;
}