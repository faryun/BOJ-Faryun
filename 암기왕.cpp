#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        vector<int> note1;
        vector<int> note2;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            note1.push_back(in);
        }

        int m;
        cin >> m;
        for(int i = 0; i < m; i++)
        {
            int in;
            cin >> in;
            note2.push_back(in);
        }

        sort(note1.begin(), note1.end());

        for(int o = 0; o < note2.size(); o++)
        {
            auto temp = lower_bound(note1.begin(), note1.end(), note2[o]);
            if(temp == note1.end())
            {
                cout << 0 << '\n';
            }
            else
            {
                if(temp == note1.begin())
                {
                    if(*temp == note2[o]) cout << 1 << '\n';
                    else cout << 0 << '\n';
                }

                else
                {
                    if(*temp == note2[o]) cout << 1 << '\n';
                    else cout << 0 << '\n';
                }
            }
        }        
    }
    return 0;
}