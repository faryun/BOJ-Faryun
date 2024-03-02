#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<pair<string, int>> item;
    //아이템 이름
    string name;

    //자작 나무 이름
    string tree;
    
    string stringBuffer;
    vector<string> temp;
    int num, list;
    int result = 0;

    cin >> list >> tree;
    
    for(int i = 0; i < list; i++)
    {
        cin >> name >> num;
        if(name == tree) result += num;
        else item.push_back(make_pair(name,num));
    }
    
    //문자열 자르기
    for(int s = 0; s < item.size(); s++)
    {
        temp.clear();
        istringstream ss(item[s].first);
        while (getline(ss, stringBuffer, '_'))
        {
            temp.push_back(stringBuffer);
        }
        
        for(int j = 0; j < temp.size(); j++)
        {
            if(temp[j] == tree) result += item[s].second;
        }
    }

    cout << result << '\n';
    return 0;
}