#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string name;
    string problem;
    unordered_map<int,string> dic;
    unordered_map<string,int> dic_2;

    int num, T;
    cin >> num >> T;

    for(int i = 1; i <= num; i++)
    {
        cin >> name;
        dic.insert(make_pair(i,name));
        dic_2.insert(make_pair(name,i));
    }

    for(int t = 0; t < T; t++)
    {
        cin >> problem;
        
        if(isdigit(problem[0]))
        {
            int p;
            p = stoi(problem);
            cout << dic.at(p) << '\n';
        }

        else
        {
            cout << dic_2.at(problem) << '\n';
        }
    }
    return 0;
}
