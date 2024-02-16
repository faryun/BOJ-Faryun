#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int word = 1;

    getline(cin, str);
    if(str.length() == 1 && str[0] == ' ') word = 0;
    for(int i = 1; i < str.length() - 1; i++) if(str[i] == ' ') word++;
    
    cout << word << endl;
}
