#include <iostream>

using namespace std;

int a = 0, b = 0;
int fibonacci(int n) {
    if (n == 0) {
        a++;
        return 0;
    } 
    else if (n == 1) {
        b++;
        return 1;
    } 
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,num;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        a = 0;
        b = 0;
        cin >> num;
        fibonacci(num);
        cout << a << " " << b << '\n';
    }
    return 0;
}