#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string,int> &a,pair<string,int> &b)
{
    return a.second > b.second;
}

int main()
{
    int n, need, open;
    cin >> n >> need >> open;
    map<string,int> score;

    for(int i = 0; i < n; i++)
    {
        string str;
        int s;
        cin >> str >> s;
        score.insert(make_pair(str,s));
    }

    int min = 0;
    int max = 0;
    
    //공개 더하기
    for(int o = 0; o < open; o++)
    {
        string name;
        cin >> name;
        min += score.at(name);
        max += score.at(name);
        score.erase(name);
    }
    
    vector<pair<string,int>> temp(score.begin(), score.end());

    sort(temp.begin(),temp.end(),compare);

    vector<pair<string, int>>::iterator iter = temp.begin();
    vector<pair<string, int>>::reverse_iterator iter2 = temp.rbegin();
    
    //미공개 더하기
    for(int r = 0; r < need - open; r++)
    {
        max += iter->second;
        iter++;
        min += iter2->second;
        iter2++;
    }
    
    cout << min << " " << max;
    return 0;
}