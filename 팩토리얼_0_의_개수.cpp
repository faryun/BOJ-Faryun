#include <iostream>
#include <string>
using namespace std;

int fact(int n)
{
    if(n <= 1) return 1;
    return n * fact(n-1);
}

int main()
{
    int n;
    int temp;
    string str;
    int result = 0;
    cin >> n;
    temp = fact(n);
    str = to_string(temp);

    for(int i = str.size(); i >= 0; i--)
    {
        if(str[i] != '0') break;
        else result++;
    }

    cout << result << endl;
    return 0;
}