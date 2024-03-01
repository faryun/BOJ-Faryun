#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int t = 0; t < T; t++)
    {
        string str;
        int num;
        int front = 0, back = 0;
        cin >> str;
        
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] != '!') 
            {
                num = str[i] - '0';
                break;
            }

            else front++;
        }

        back = str.size() - (front + 1);
        
        //논리 부정이 짝수면 무시
        if(front % 2 == 0)
        {
            if(back >= 1) num = 1;
        }

        else
        {
            if(back >= 1) num = 1;
            
            if(num == 1) num = 0;
            else num = 1;
        }

        cout << num << '\n';
    }
    return 0;
}