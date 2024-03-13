#include <iostream>
#include <vector>
#include <map>

using namespace std;

int fact(int n)
{
    if(n <= 1) return n;
    return n * fact(n-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;

    for(int t = 0; t < T; t++)
    {
        map<string, int> clothes;
        map<string, int>::iterator iter;
        int n;
        int result = 1;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            string name, wear;
            cin >> name >> wear;
            if(clothes.find(wear) != clothes.end()) clothes[wear]++;
            else clothes.insert(make_pair(wear, 1));
        }

        if(clothes.size() == 1) result = n;
        else 
        {
            for(auto o : clothes)
            {
                result *= (o.second + 1);
            }
            
            result--;
        }
        
        cout << result << '\n';
    }
    
    return 0;
}