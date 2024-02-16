#include <iostream>

using namespace std;

int main()
{
    int n;
    int result = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(i / 100000000 != 0) result += 9;
        else if(i / 10000000 != 0) result += 8;
        else if(i / 1000000 != 0) result += 7;
        else if(i / 100000 != 0) result += 6;
        else if(i / 10000 != 0) result += 5;
        else if(i / 1000 != 0) result += 4;
        else if(i / 100 != 0) result += 3;
        else if(i / 10 != 0) result += 2;
        else result++;
    }
    
    cout << result << endl;
    
    return 0;
}