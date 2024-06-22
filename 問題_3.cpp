#include <iostream>
#include <map>

using namespace std;

struct sort
{
    bool operator() (const string &left, const string &right) const
    {
        if(left.size() == right.size())
        {
            return left < right;
        }

        else return left.size() < right.size();
    }
};


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    map<string, int, sort> num;
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        string s;
        int n;
        cin >> s >> n;
        
        if(num.find(s) != num.end())
        {
            auto temp = num.find(s);
            temp->second += n;
        }
        else num.insert(make_pair(s, n));
    }

    for(auto o : num) cout << o.first << " " << o.second << '\n';
}