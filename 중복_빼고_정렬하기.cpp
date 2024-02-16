#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n, temp;
    set<int> num;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        num.insert(temp);
    }

    for(auto o : num)
    {
        cout << o <<" ";
    }

    return 0;
}