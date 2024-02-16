#include <iostream>

using namespace std;

int main()
{
    string str;

    int result = 0;
    while (true)
    {
        cin >> str;
        if(str == "#") break;

        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i' || str[i] == 'o'|| str[i] == 'u') result++;
        }
    }
    cout << result << endl;
    
    return 0;
}