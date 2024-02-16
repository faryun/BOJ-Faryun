#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    while (true)
    {
        if(cin.eof()) break;
        getline(cin,str);
        cout << str << endl;
    }
    
    return 0;
}