#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n;
    cin.ignore();
    
    for(int i = 1; i <= n; i++)
    {
        getline(cin,str);
        cout<< i <<". " << str << endl;
    }
    return 0;
}