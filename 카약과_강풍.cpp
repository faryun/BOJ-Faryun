#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int n, s, r;
    cin >> n >> s >> r;
    set<int> spare;
    set<int> broke;
    set<int> result;

    //입력
    for(int i = 0; i < s; i++)
    {
        int in;
        cin >> in;
        broke.insert(in);
    }

    for(int j = 0; j < r; j++)
    {
        int put;
        cin >> put;
        spare.insert(put);
    }

    //어차피 중복이면 안넣으면 그만아님?
    if(result.size() >= spare.size()) cout << result.size() - spare.size();
    else cout << 0;

    return 0;
}