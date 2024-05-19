#include <iostream>
#include <vector>
using namespace std;

struct cow
{
    int burger = 0;
    int side = 0;
    int drink = 0;
};


int main()
{
    vector<cow> food;
    food.resize(1001);
    int b, c, d;
    cin >> b >> c >> d;
    for(int i = 0; i < b; i++)
    {
        int bu;
        cin >> bu;
        food[i].burger = bu;
    }
    
    for(int i = 0; i < c; i++)
    {
        int bu;
        cin >> bu;
        food[i].side = bu;
    }

    for(int i = 0; i < d; i++)
    {
        int bu;
        cin >> bu;
        food[i].drink = bu;
    }

    for(auto t : food) cout << t.burger << " " << t.side << " " << t.drink << endl;
    return 0;
}