#include <iostream>

using namespace std;

int main()
{
    int x, size;
    int result;
    cin >> x >> size;
    
    if(size % 2 != 0) cout << "ERROR";
    else if(x <= 0) cout << 0;
    else if(size <= 1 && x >= 1) cout << "INFINITE";
    else
    {
        x -= size / 2;
        result = x / (size / 2);
        cout << result;
    }

    return 0;
}