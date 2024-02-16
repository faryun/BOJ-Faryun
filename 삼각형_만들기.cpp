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
    
    //삼각형 결정조건 : 가장 긴 변의 길이가 나머지 두 변의 합보다 작아야함.
    for(int i = 0; i < n - 2; i++)
    {
        if(length[i+2] >= length[i] + length[i+1]) continue;
        else result = length[i] + length[i+1] + length[i+2];
    }

    if(result) cout << result << '\n';
    else cout << -1 << endl;

    return 0;
}