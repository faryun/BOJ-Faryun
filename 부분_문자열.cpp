#include <iostream>

using namespace std;

int main()
{
    string str;
    string sub;
    
    while (!cin.eof())
    {
        cin >> sub >> str;
        if(str.find(sub) != -1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}