#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> carrot;
    int n, k;
    int price, speed;
    int click = 1;
    cin >> n >> k;
    
    //순수 클릭
    int c = 0;
    for(int i = 0; i < k; i++) c += click;
    carrot.push_back(c);

    //부스터 구매
    c = 0;
    for(int t = 0; t < n; t++)
    {
        c += click;
        cin >> price >> speed;
    }

    sort(carrot.begin(),carrot.end(),greater<int>());

    cout << carrot[0];    
    return 0;
}