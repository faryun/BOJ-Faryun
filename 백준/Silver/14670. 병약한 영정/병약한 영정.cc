#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);

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
            else died = true;
        }
        
        if(died) cout << "YOU DIED" << '\n';
        
        else
        {
            for(int i = 0; i < result.size(); i++)
            {
                cout << result[i] << " ";
            }
            cout << '\n';
        }
    }

    return 0;
}