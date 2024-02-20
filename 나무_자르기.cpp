#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,1000000> tree;
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> tree[i];
    }
    
    return 0;
}