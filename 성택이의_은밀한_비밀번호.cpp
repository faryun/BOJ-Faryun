#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if(str.length() >= 6 && str.length() <= 9) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}