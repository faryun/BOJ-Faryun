#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> med;
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
        for(int h = 0; h < k; h++)
        {
            int m;
            cin >> m;
            if(med.find(m) != med.end()) cout << med.at(m) << " ";
            else cout << "YOU DIED";
        }
        cout << '\n';
    }

    return 0;
}