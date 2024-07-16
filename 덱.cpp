#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    deque<int> test;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        //push_front X: 정수 X를 덱의 앞에 넣는다.
        string str;
        cin >> str;
        if(str == "push_front")
        {
            int q;
            cin >> q;
            test.push_front(q);
        }
        //push_back X: 정수 X를 덱의 뒤에 넣는다.
        if(str == "push_back")
        {
            int q;
            cin >> q;
            test.push_back(q);
        }
        //pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
        if(str == "pop_front")
        {
            if(!test.empty())
            {
                cout << test.front() << '\n';
                test.pop_front();
            }
            else cout << -1 << '\n';
        }
        //pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
        if(str == "pop_back")
        {
            if(!test.empty())
            {
                cout << test.back() << '\n';
                test.pop_back();
            }
            else cout << -1 << '\n';
        }
        //size: 덱에 들어있는 정수의 개수를 출력한다.
        if(str == "size")
        {
            cout << test.size() << '\n';
        }
        //empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
        if(str == "empty")
        {
            cout << test.empty() << '\n';
        }
        //front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
        if(str == "front")
        {
            if(!test.empty()) cout << test.front() << '\n';
            else cout << -1 << '\n';
        }
        //back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
        if(str == "back")
        {
            if(!test.empty()) cout << test.back() << '\n';
            else cout << -1 << '\n';
        }
    }
    return 0;
}