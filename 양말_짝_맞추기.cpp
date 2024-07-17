#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> n;
    for(int i = 0; i < 5; i++)
    {
        int num;
        cin >> num;
        if(find(n.begin(),n.end(), num) == n.end()) n.push_back(num);
        else n.erase(find(n.begin(),n.end(), num));
    }

    cout << n[0];
    return 0;
}