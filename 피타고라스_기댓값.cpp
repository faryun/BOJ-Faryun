#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        double team_score[1100] = {0,};
        double team_conceded[1100] = {0,};
        double team_value[1100] = {0,};
        int game, team;
        int team1, team2, score1, score2;
        cin >> team >> game;
        for(int i = 0; i < game; i++)
        {
            cin >> team1 >> team2 >> score1 >> score2;
            for(int j = 0; j < team; j++)
            {
                if(j+1 == team1)
                {
                    team_score[j] += score1;
                    team_conceded[j] += score2;
                }

                else if(j+1 == team2)
                {
                    team_score[j] += score2;
                    team_conceded[j] += score1;
                }
            }
        }

        for(int l = 0; l < team; l++)
        {
            if(team_score[l] == 0 && team_conceded[l] == 0) team_value[l] = 0;
            else team_value[l] = team_score[l] * team_score[l] / ((team_score[l] * team_score[l]) + (team_conceded[l] * team_conceded[l])); 
        }

        sort(team_value,team_value+team);

        cout << int(team_value[team-1] * 1000) << '\n';
        cout << int(team_value[0] * 1000) << '\n';
    }
}