#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t = 1; t <= T; t++)
    {
        vector<int> score;
        int student;
        int gap = 0;
        cin >> student;
        for(int i = 0; i < student; i++)
        {
            int input;
            cin >> input;
            score.push_back(input);
        }
        sort(score.begin(),score.end(),greater<int>());
        
        for(int g = 0; g < student - 1; g++)
        {
            if(g == 0) gap = score[0] - score[1];
            
            if(gap < score[g] - score[g + 1]) gap = score[g] - score[g + 1];
        }

        cout << "Class " << t << endl;
        cout << "Max " << score[0] << "," << " Min " << score[student - 1] << "," << " Largest gap " << gap << endl;
    }

    return 0;
}