#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        string str;
        bool yn;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> str; 
                
            string temp = str;
            reverse(temp.begin(), temp.end());
            
            if(str == temp)
            {
                yn = true;
                break;
            }

            else yn = false;
        }
        if(yn) cout << str << '\n';
        else cout << '0' << '\n';
    }
    
    return 0;
}