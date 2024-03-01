#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for(int t = 0; t < T; t++)
    {
        int size;
        long long int num = 11;

        cin >> size;

        if(size == 1) cout << "-1" << '\n';
        else if(size == 2) cout << "11" << '\n';
        
        //11의 배수
        else
        {
            while (true)
            {
                num *= 11;
                
                //팰린드롬 검사
                string str = to_string(num);
                string temp = str;
                reverse(temp.begin(), temp.end());
                
                if(temp == str && str.size() == size)
                {
                    cout << str << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}