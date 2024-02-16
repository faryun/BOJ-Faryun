#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int length[1000000];
    int result = 0;
    cin >> n;

    for(int i = 0; i < n; i++) cin >> length[i];
    
    sort(length,length+n);

    return 0;
}