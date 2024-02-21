#include <iostream>
#include <iomanip>
#include <map>
#include <set>

using namespace std;

int main()
{
    //전처리
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;

    //총 제출 횟수
    int N;
    cin >> N;

    //각종 변수
    int num;
    string id;
    int result, memory, time, lang, code;
    double ac = 0, tried = 0;
    double answer;

    //ID와 시도 횟수
    map<string, int> id_map;
    map<string, int>::iterator iter;
    
    //정답자
    set<string> ac_set;
    set<string>::iterator ac_iter;
    
    //관리자
    ac_set.insert("megalusion");

    for(int t = 0; t < N; t++)
    {
        cin >> num >> id >> result >> memory >> time >> lang >> code;
        iter = id_map.find(id);
        ac_iter = ac_set.find(id);
        
        //관리자나 또는 이미 맞춘사람의 제출
        if(ac_iter != ac_set.end()) continue;
        
        //첫 제출이 아닌 경우
        else if(iter != id_map.end())
        {
            //정답을 맞춘경우
            if(result == 4)
            {
                ac++;
                tried += iter->second;
                ac_set.insert(id);
            }

            else iter->second++;
        }

        //첫 제출
        else if(result != 4) id_map.insert(make_pair(id, 1));
        
        else
        {
            ac_set.insert(id);
            ac++;
        }
    }

    //정답자 0명
    if(ac == 0)
    {
        answer = 0;
        cout << setprecision(0);
    }

    else
    {
        answer = ac / (ac + tried);
        
        //소숫점
        int temp = answer * 1000;
        if(temp % 100 != 0) cout << setprecision(20);
        else cout << setprecision(1);
    } 
    
    cout << answer * 100;
    return 0;
}