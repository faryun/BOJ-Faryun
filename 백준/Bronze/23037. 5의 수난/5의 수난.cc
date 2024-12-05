#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string n;
    long long sum = 0;
    cin >> n;
    for(int i = 0; i < 5; i++)
    {
        int temp = (n[i] - '0');
        sum += pow(temp, 5);
    }
    cout << sum;
    return 0;
}