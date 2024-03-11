#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> make;
    int tired, n;
    int result = 0;
    cin >> tired >> n;

    make.resize(n);
    
    for(int i = 0; i < n; i++) cin >> make[i];
    sort(make.begin(), make.end());
    
    for(int o = 0; o < make.size(); o++)
    {
        tired += make[o];
        result++;
        if(tired >= 200) break;
    }

    cout << result;
    return 0;
}