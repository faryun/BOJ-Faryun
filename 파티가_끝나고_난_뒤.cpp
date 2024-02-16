#include <iostream>

using namespace std;

int main()
{
    int L,P,news[5],people;

    cin >> L >> P;
    for(int i = 0; i < 5; i++) cin >> news[i];
    people = L*P;
    
    for(int j = 0; j < 5; j++) cout << news[j] - people << " ";
    return 0;
}