#include <iostream>

using namespace std;
uint64_t fact(int n)
{
    if(n <= 1) return 1;
    else return n * fact(n - 1);
}

int main()
{
    int n, m;
    uint64_t result;
    cin >> n >> m;
    result = fact(n) / (fact(m) * fact(n-m));
    cout << result << endl;
    return 0;
}