#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> med;
    vector<int> result;
    for(int i = 0; i < n; i++)
    {
        int effect, name;
        cin >> effect >> name;
        med.insert(make_pair(effect, name));
    }
    
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        int k;
        cin >> k;
        bool died = false;
        result.clear();
        for(int h = 0; h < k; h++)
        {
            int m;
            cin >> m;
            if(med.find(m) != med.end()) result.push_back(med.at(m));
            else
            {
                died = true;
                break;
            }
        }
        
        if(died) cout << "YOU DIED" << '\n';
        
        else
        {
            for(auto r : result) cout << r << " ";
            cout << '\n';
        }
    }

    return 0;
}