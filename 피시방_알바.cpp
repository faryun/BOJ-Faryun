#include <iostream>

using namespace std;

int main()
{
    bool seats[100];
    int n, customer, result = 0;

    for(int temp = 0; temp < 100; temp++) seats[temp] = false;

    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> customer;
        if(seats[customer])
        {
            result++;
            continue;
        }
        seats[customer] = true;
    }

    cout << result << endl;
    return 0;
}