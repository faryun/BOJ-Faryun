#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int r = 31, m = 1234567891;
    unsigned long long int result = 0;
    string str;

    cin >> n;
    cin >> str;

    for(int i = 0; i < n; i++)
    {
        unsigned long long int temp = ((str[i] - 'a' + 1) % m);

        for(int j = 0; j < i; j++) temp = (temp % m * r) % m;

        result = (result % m + temp % m) % m;
    }
    
    cout << result << endl;
    
    return 0;
}