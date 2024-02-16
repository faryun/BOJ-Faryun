#include <iostream>

using namespace std;

long long math(long long A, long long B)
{
    long long result = (A + B) * (A - B);
    return result;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << math(a,b) << endl;
    return 0;
}