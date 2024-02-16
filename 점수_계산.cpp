#include <iostream>
#include <algorithm>
#include <array>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    array<int, 8> score;
    array<int, 8> sort_score;
    set<int> res;

    int result = 0;
    for(int i = 0; i < 8; i++)
    {
        cin >> score[i];
    }
    
    sort_score = score;
    sort(sort_score.begin(),sort_score.end());

    for(int j = 7; j > 2; j--)
    {
        result += sort_score[j];
        for(int l = 0; l < 8; l++)
        {
            if(score[l] == sort_score[j]) res.insert(l + 1);
        }
    }
    
    cout << result << '\n';

    for(auto o : res) cout << o << " ";
    return 0;
}