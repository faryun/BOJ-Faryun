#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        char p, pb;
        int n, num;
        cin >> n >> p;
        //알파벳 -> 숫자
        if(p == 'C')
        {
            for(int c = 0; c < n; c++)
            {
                cin >> pb;
                cout << int(pb - 'A' + 1) << " "; 
            }
            cout << '\n';
        }

        //숫자 -> 알파벳
        else if(p == 'N')
        {
            for(int j = 0; j < n; j++)
            {
                cin >> num;
                cout << char('A' + num - 1) << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}