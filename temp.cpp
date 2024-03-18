#include <iostream>
#include <vector>
using namespace std;

struct boat
{
    int num;
    int speed;
    int rank;
};


int main()
{
    vector<boat> b;
    b.resize(10);
    int r, c;
    cin >> r >> c;
    int w = 1;
    for(int n = 1; n < 10; n++) b[n].num = n;
    for(int i = 0; i < r; i++)
    {
        string str;
        cin >> str;
        for(int j = 1; j < c-1; j++)
        {
            if(str[j] != '.')
            {
                int temp = str[j] - '0';
                b[temp].speed = j;
                break;
            }
        }
    }

    for(auto t : b) cout << t.num << " " << t.speed << endl;
    return 0;
}