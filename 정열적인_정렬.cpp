#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int num[500000];
    for(int i = 0; i < n; i++) cin >> num[i];

    sort(num, num+n);

    for(int o = 0; o < n; o++) cout << num[o] << " ";
}