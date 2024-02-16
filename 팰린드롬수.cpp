#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    while (true)
    {
        cin >> str; 
        if(str == "0") break;
        
        string temp = str;
        reverse(temp.begin(), temp.end());
        
        if(str == temp) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    
    return 0;
}