#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> height;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int h;
        cin >> h;
        height.push_back(h);
    }
    int max = 0;
    int temp = 0;

    for (size_t i = 0; i < height.size(); i++)
    {
        for (size_t j = i+1; j < height.size(); j++)
        {
            if(height[i] > height[j]) temp++;
            else break;
        }
        
        if(max <= temp) max = temp;
        temp = 0;
    }

    cout << max;
    return 0;
}