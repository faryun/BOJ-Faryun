#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

struct person
{
    int contry_t;
    int num_t;
    int score_t;
};

bool compare(person &p1, person &p2)
{
    return p1.score_t > p2.score_t;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //참가자 수
    int entry;
    cin >> entry;

    //스코어 보드
    vector<person> scoreboard;

    //국가별 메달 얻은 횟수
    vector<int> winner;
    
    scoreboard.resize(entry);
    winner.resize(entry);

    for(int i = 0; i < entry; i++)
    {
        int contry, student, score;
        cin >> contry >> student >> score;
        scoreboard[i].contry_t = contry;
        scoreboard[i].num_t = student;
        scoreboard[i].score_t = score;
    }

    sort(scoreboard.begin(),scoreboard.end(),compare);
    
    //출력
    int medal = 0;
    for(int o = 0; o < scoreboard.size(); o++)
    {
        //메달 얻은 사람이 3명이면
        if(medal == 3) break;

        //한 국가에서 최대 2명
        if(winner[scoreboard[o].contry_t] == 2) continue;
        else
        {
            cout << scoreboard[o].contry_t << " " << scoreboard[o].num_t << '\n';
            winner[scoreboard[o].contry_t]++;
            medal++;    
        }
    }
    return 0;
}