#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> num;
    set<int>::iterator itr;
    string str;
    int t, n;
    cin >> t;
    for(int T = 0; T < t; T++)
    {
        cin >> str;

        //add x: S에 x를 추가한다. (1 ≤ x ≤ 20) S에 x가 이미 있는 경우에는 연산을 무시한다.
        if(str == "add")
        {
            cin >> n;
            num.insert(n);
        }
        
        //remove x: S에서 x를 제거한다. (1 ≤ x ≤ 20) S에 x가 없는 경우에는 연산을 무시한다.
        else if(str == "remove")
        {
            cin >> n;
            num.erase(n);
        }

        //check x: S에 x가 있으면 1을, 없으면 0을 출력한다. (1 ≤ x ≤ 20)
        else if(str == "check")
        {
            cin >> n;
            itr = num.find(n);
            if(itr != num.end()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }

        //toggle x: S에 x가 있으면 x를 제거하고, 없으면 x를 추가한다. (1 ≤ x ≤ 20)
        else if(str == "toggle")
        {
            cin >> n;
            itr = num.find(n);
            if(itr != num.end()) num.erase(itr);
            else num.insert(n);
        }

        //all: S를 {1, 2, ..., 20} 으로 바꾼다.
        else if(str == "all")
        {
            for(int i = 1; i <= 20; i++)
            {
                num.insert(i);
            }
        }

        //empty: S를 공집합으로 바꾼다.
        else if(str == "empty")
        {
            num.clear();
        }
    }

    return 0;
}