#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> shop;
    int res = 0;
    int drink = 0;
    for(int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        shop.push_back(in);
    }

    for(int o = 0; o < n; o++)
    {
        if(drink == shop[o])
        {
            res++;
            if(drink < 2)
            {
                drink++;
            }

            else drink = 0;
        }
    }

    cout << res;
    return 0;
}