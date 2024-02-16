#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, temp = 0;
    string str; 
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        for(int j = 0; j < str.length(); j++)
        {
            if(isalpha(str[j])) temp += (str[j] - 'A');
            cout << temp << endl;
        }
    }
    return 0;
}