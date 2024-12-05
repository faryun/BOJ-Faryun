#include <iostream>
#include <deque>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for(int t = 0; t < T; t++)
    {
        deque<int> num;
        bool eflag = false;
        bool rflag = false;
        string str;
        cin >> str;
        
        int n;
        cin >> n;

        string arr;
        cin >> arr;

        //파싱
        arr.erase(arr.begin());
        arr.erase(arr.end() - 1);
        string temp;
        stringstream sstream(arr);
        while(getline(sstream, temp, ',')) 
        num.push_back(stoi(temp));

        //함수 처리
        for(int f = 0; f < str.size(); f++)
        {
            //반전
            if(str[f] == 'R')
            {
                if(rflag) rflag = false;
                else rflag = true;
            }
            
            //삭제
            else if(str[f] == 'D')
            {
                //비어있으면 error
                if(num.empty())
                {
                    eflag = true;
                    break;
                }
                else
                {
                    if(rflag) num.pop_back();
                    else num.pop_front();
                }
            }
        }

        //출력
        if(eflag) cout << "error" << '\n';
        else
        {
            if(rflag)
            {
                cout << '[';
                for(int o = num.size() - 1; o >= 0; o--)
                {
                    if(o == 0) cout << num[o];
                    else cout << num[o] << ',';
                }
                cout << ']' << '\n';
            }
            else
            {
                cout << '[';
                for(int o = 0; o < num.size(); o++)
                {
                    if(o == num.size() - 1) cout << num[o];
                    else cout << num[o] << ',';
                }
                cout << ']' << '\n';
            }
        }
    }
    return 0;
}