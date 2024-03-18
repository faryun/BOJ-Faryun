#include <iostream>

using namespace std;
double fact(int n)
{
    if(n <= 1) return 1;
    else return n * fact(n - 1);
}

int main()
{
    cout<<fixed;
    cout.precision(0);
    int n, m;
    uint64_t result;
    cin >> n >> m;
    result = fact(n) / (fact(m) * fact(n-m));
    cout << result << endl;
    return 0;
}