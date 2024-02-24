#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        string str;
        string result;
        getline(cin,str);
        if(str == "***") break;

        for(int i = str.length() - 1; i >= 0; i--) result += str[i];
        cout << result << endl;
    }

    return 0;
}