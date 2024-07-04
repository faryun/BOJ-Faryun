#include <iostream>

using namespace std;

int main()
{
    int a[1000], b[1000];
    int n;
    cin >> n;
    int res = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int j = 0; j < n; j++) cin >> b[j];
    for(int o = 0; o < n; o++) if(b[o] >= a[o]) res++;
    cout << res;
    return 0;
}