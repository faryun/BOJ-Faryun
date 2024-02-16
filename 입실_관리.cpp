#include <iostream>

using namespace std;

int main()
{
    int n;
    string str;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> str;
        for(int j = 0; j < str.length(); j++)
        {
            str[j] = tolower(str[j]);
        }

        cout << str << endl;
    }
    return 0;
}