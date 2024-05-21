#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct people
{
    string name;
    double height;
};

bool compare(const people &a, const people &b)
{
    return a.height > b.height;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    while (true)
    {
        vector<people> p;
        int n;
        cin >> n;
        if(n == 0) break;

        p.resize(n);
        for(int i = 0; i < n; i++)
        {
            string n;
            double h;
            cin >> n >> h;
            p[i].name = n;
            p[i].height = h;
        }

        stable_sort(p.begin(), p.end(), compare);

        for(int t = 0; t < n; t++)
        {
            cout << p[t].name << " ";
            if(p[t].height != p[t+1].height) break;
        }

        cout << '\n';
    }
    
    return 0;
}