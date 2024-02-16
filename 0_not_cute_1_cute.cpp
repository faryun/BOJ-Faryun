#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, vote, result = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> vote;
        if(vote == 1) result += 1;
        else result -= 1;
    }

    if(result < 0) cout << "Junhee is not cute!" <<"\n";
    else cout << "Junhee is cute!" << "\n";
    return 0;
}