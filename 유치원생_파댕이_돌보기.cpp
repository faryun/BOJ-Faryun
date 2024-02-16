#include <iostream>

using namespace std;

int main()
{
    int time, candy, taste = 0, sum = 0;

    cin >> time;
    cin >> candy;
    for(int i = 0; i < candy; i++)
    {
        cin >> taste;
        sum += taste;
    }
    
    if(sum >= time) cout << "Padaeng_i Happy" << endl;
    else cout << "Padaeng_i Cry" << endl;
}