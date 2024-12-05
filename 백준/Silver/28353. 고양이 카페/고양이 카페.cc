#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    deque<int> cat;
    int n, w;
    cin >> n >> w;
    
    for(int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        cat.push_back(c);
    }

    sort(cat.begin(), cat.end());
    int p = 0;
    int left = 0, right = cat.size() - 1;
    while (true)
    {
        if(left >= right) break;
        if(cat[left] + cat[right] <= w)
        {
            p++;
            left++;
            right--;
        }

        else right--;
    }

    cout << p;
    return 0;
}