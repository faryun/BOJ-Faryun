#include <iostream>
#include <string>
using namespace std;

long long int fact(int n)
{
    if(n <= 1) return 1;
    return n * fact(n-1);
}

int main()
{
    int n;
    string str;
    int result = 0;
    cin >> n;
    str = to_string(fact(n));

    for(int i = str.size() - 1; i >= 0; i--)
    {
        if(str[i] != '0') break;
        else result++;
    }

    cout << result << endl;
    return 0;
}