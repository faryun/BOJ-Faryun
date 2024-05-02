#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    deque<int> fruit;
    
    for(int i = 0; i < n; i++)
    {
        int h;
        cin >> h;
        fruit.push_back(h);
    }
    
    sort(fruit.begin(), fruit.end());

    for (int o = 0; o < fruit.size(); o++)
    {
        if(fruit[o] <= l)
        {
            l++;
        }
    }
    
    cout << l;
    return 0;
}