#include <iostream>
#include <string>

using namespace std;

int main()
{
    int result = 0;
    string str;
    for(int i = 0; i < 8; i++)
    {
        cin >> str;

        if(i % 2 == 0)
        {
            for(int j = 0; j <= 7; j+=2)
            {
                if(str[j] == 'F') result++;
            } 
        }
        
        else
        {
            for(int j = 1; j <= 7; j+=2)
            {
                if(str[j] == 'F') result++;
            }
        }
    }

    cout << result << endl;
    return 0;
}