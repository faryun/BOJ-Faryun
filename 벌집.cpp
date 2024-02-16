#include <iostream>

using namespace std;

int main()
{
    int n, result = 1;
    cin >> n;
    int temp = 1;

    while (true)
    {
        if(temp >= n) break;
        temp += 6 * result;
        result++;
    }
    
    cout << result << endl;

    return 0;
}