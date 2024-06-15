#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> name;
    
    int sum = 1;
    bool check = false;
    bool c = false;
    
    int n;
    cin >> n;
    
    string result;

    for(int i = 0; i < n; i++)
    {
        string na;
        cin >> na;
        name.push_back(na);
    }

    sort(name.begin(), name.end());

    for(int j = 0; j < n - 1; j++)
    {
        if(name[j][0] != name[j+1][0])
        {
            sum = 1;
            c = false;
        } 
        else
        {
            sum++;
            if(sum >= 5 && !c)
            {
                check = true;
                c = true;
                result += name[j][0];
            }
        }
    }
    
    if(check) cout << result;
    else cout << "PREDAJA";

    return 0;
}