#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> box;
    int T;
    cin >> T;

    for(int t = 0; t < T; t++)
    {
        int candy, box_n, result = 1;
        cin >> candy >> box_n;
        box.clear();
        for(int i = 0; i < box_n; i++)
        {
            int x, y;
            cin >> y >> x;
            box.push_back(x * y);
        }
        
        sort(box.begin(), box.end(), greater<int>());

        for(int j = 0; j < box.size(); j++)
        {
            if(candy - box[j] <= 0) break;
            else
            {
                candy -= box[j];
                result++;
            }
        }

        cout << result << '\n';
    }
    return 0;
}