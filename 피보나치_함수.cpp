#include <iostream>
#include <array>

using namespace std;

//0과 1의 갯수를 메모하는 배열
array<int,41> zero = {1,0,1,};
array<int,41> one = {0,1,1,};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, num;
    
    cin >> n;
    for(int i = 3; i < 41; i++)
    {
        zero[i] = zero[i-1] + zero[i-2];
        one[i] = one[i-1] + one[i-2];
    }

    for(int o = 0; o < n; o++)
    {
        cin >> num;
        cout << zero[num] << " " << one[num] << '\n';
    }

    return 0;
}