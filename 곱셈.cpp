#include <iostream>

using namespace std;

int pow(int n)
{
    return n;
}

int main()
{
    int a, b, c;
    long long int result;
    cin >> a >> b >> c;

    result = pow(a);

    cout << result % c << '\n';
}