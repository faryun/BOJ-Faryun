#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector<int> point;
    int result = 0;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        point.push_back(input);
    }
    
    sort(point.begin(),point.end());

    result = (point[0] + point[point.size()-1]) / 2;

    cout << result << '\n';

    return 0;
}