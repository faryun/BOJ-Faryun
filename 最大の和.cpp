#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> num;
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        num.push_back(in);
    }

    int max = 0;
    int sum = 0;
    for(int s = 0; s < k; s++)
    {
        sum += num[s];
        max = sum;
    }

    for(int o = 0; o < (n - 1) - (k - 1) ; o++)
    {
        sum = sum - num[o] + num[o + k];
        if(sum > max) max = sum;
    }
    cout << max << '\n';
    return 0;
}