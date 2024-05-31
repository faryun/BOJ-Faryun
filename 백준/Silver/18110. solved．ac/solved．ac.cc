#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int t, n;
    int sum = 0;
    vector<int> score;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> n;
        score.push_back(n);
    }
    
    sort(score.begin(), score.end());

    double temp = t * 0.15;
    temp = floor(temp + 0.5);

    if(score.empty()) cout << 0;
    else
    {
        for(int o = temp; o < t - temp; o++)
        {
            sum += score[o];
        }

        cout << floor((sum / (t - (temp + temp))) + 0.5);
    }
    return 0; 
}