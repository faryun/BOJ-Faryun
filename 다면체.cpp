#include <iostream>

using namespace std;

int main()
{
    //(꼭짓점의 수) - (모서리의 수) + (면의 수) = 2
    int T;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        //꼭짓점
        int v;
        //모서리
        int e;
        //면의 갯수
        int s;

        cin >> v >> e;
        s = 2 - v + e;
        cout << s << '\n';
    }
    return 0;
}