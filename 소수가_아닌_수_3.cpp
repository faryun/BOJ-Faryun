#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> num;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        num.push_back(input);
    }

    cout << "YES" << '\n';
    cout << 111 * num[0] << '\n';
    return 0;
}