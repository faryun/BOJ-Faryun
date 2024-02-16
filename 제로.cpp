#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> num;
    int k, n, result = 0;

    cin >> k;
    for(int i = 0; i < k; i++)
    {
        cin >> n;
        if(n == 0&& !num.empty()) num.pop_back();
        else num.push_back(n);
    }

    for(int j = 0; j < num.size(); j++)
    {
        result += num[j];
    }

    cout << result << endl;
}