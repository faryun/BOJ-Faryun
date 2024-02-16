#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        printf("0");
        return 0;
    } else if (n == 1) {
        printf("1");
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n,num;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        cout << fibonacci(num) << endl;
    }
    return 0;
}