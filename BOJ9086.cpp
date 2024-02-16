#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string str;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        cout << str[0] << str[str.length()-1] << endl;
    }
    return 0;
}