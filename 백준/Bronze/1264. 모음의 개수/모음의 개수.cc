#include <iostream>

using namespace std;

int main()
{
    string str;

    while (true)
    {
        int result = 0;
        getline(cin,str);
        if(str == "#") break;

        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i' || str[i] == 'o'|| str[i] == 'u'
            || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
            result++;
        }
        
        cout << result << endl;
    }
    
    return 0;
}