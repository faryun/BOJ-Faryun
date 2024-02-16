#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string str;
    
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        getline(cin, str);
        for (int j = str.length(); j >= 0; j--)
        {            
            cout << str[j];
        }
        cout << endl;
    }
}