#include <iostream>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

struct sorting
{
    bool operator() (const string& left, const string& right) const
	{
		if (left.size() == right.size()) return left < right;
		else return left.size() < right.size();
	}
};

bool is_boj(string str)
{
    bool boj;
    if(str.substr(0,6) == "boj.kr")
    {
        for(int i = 7; i < str.size(); i++)
        {
            if(isdigit(str[i])) boj = true;
            else
            {
                boj = false;
                break;
            }
        }
    }
    else boj = false;

    return boj;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    multiset<string,sorting> study;
    multiset<string,sorting> boj;
    
    int n;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        string str;
        getline(cin,str);
        if(is_boj(str)) boj.insert(str);
        else study.insert(str);
    }

    for(auto s : study) cout << s << '\n';
    for(auto b : boj) cout << b << '\n';
    
    return 0;
}
