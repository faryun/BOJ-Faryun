#include <iostream>

using namespace std;

int main()
{
    string s;
    int n;
    cin >> s >> n;
    int r = 0;
    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if(str == s) r++;
    }

    cout << r;
    return 0; 
}