#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int n, temp;
    cin >> temp;
    for(int i = 0; i < temp; i++)
    {
        cin >> n >> str;
        for(int j = 0; j < str.length(); j++)
        {
            for(int l = 0; l < n; l++)
            {
                cout<<str[j];
            }
        }
        cout<<endl;
    }
    return 0;
}