#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n = 1;
    while (true)
    {
        string a, b;
        cin >> a >> b;
        if(a == "END" && b == "END") break;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        cout << "Case " << n << ": ";
        if(a == b) cout << "same";
        else cout << "different";
        cout << '\n';
        n++;
    }
    
    return 0;
}