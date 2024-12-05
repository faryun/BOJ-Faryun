#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 1;

    while (true)
    {
        int rad, w, h;
        cin >> rad;
        if(!rad) break;
        cin >> w >> h;
        rad *= 2;

        if(w * w + h * h <= rad * rad) cout << "Pizza " << n << " fits on the table." << '\n';
        else cout << "Pizza " << n << " does not fit on the table." << '\n';
        n++;
    }
    
    return 0;
}
