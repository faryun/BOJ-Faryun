#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    while (true)
    {
        cin >> n1 >> n2;
        if(n1 == 0 && n2 == 0) break;
        if(n1 > n2) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}