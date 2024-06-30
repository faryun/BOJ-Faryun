#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{
    //입력
    int n, k;
    deque<int> num;
    vector<int> result;
    cin >> n >> k;
    for(int i = 1; i <= n; i++) num.push_back(i);
    
    for(int j = 0; j < n; j++)
    {
        for(int r = 0; r < k - 1; r++)
        {
            int temp = *num.begin();
            num.pop_front();
            num.push_back(temp);
        }
        int temp = *num.begin();
        num.pop_front();
        result.push_back(temp);
    }
    
    cout << '<';
    for(int o = 0; o < result.size(); o++)
    {
        if(o < result.size()-1) cout << result[o] << ", ";
        else cout << result[o];
    }
    cout << '>';
    return 0;
}