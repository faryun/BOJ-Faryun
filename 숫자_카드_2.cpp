#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    map<int, int> num;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        if(num.find(in) != num.end())
        {
            auto temp = num.find(in);
            temp->second++;
        }
        else num.insert(make_pair(in, 1));
    }

    int T;
    cin >> T;

    for(int t = 0; t < T; t++)
    {
        int o;
        cin >> o;
        cout << num[o] << " ";
    }
    return 0;
}