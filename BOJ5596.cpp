#include <iostream>

using namespace std;

int main()
{
    int it, math, sci, eng;
    int min_score, man_score;
    
    cin >> it >> math >> sci >> eng;
    min_score = it + math + sci + eng;
    
    cin >> it >> math >> sci >> eng;
    man_score = it + math + sci + eng;

    if(min_score > man_score) cout << min_score << endl;
    else if(min_score < man_score) cout << man_score << endl;
    else cout << min_score << endl;
    
    return 0;
}