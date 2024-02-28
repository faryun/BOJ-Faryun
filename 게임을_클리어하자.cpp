#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
    array<bool, 500> lock = {0, };
    int n, m;
    int result = 0;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        vector<int> stat;
        for(int j = 0; j < m; j++)
        {
            int input;
            cin >> input;
            stat.push_back(input);
        }
        
        //무기 선택
        int min = stat[0];
        for(int w = 0; w < stat.size(); w++)
        {
            //지난 회차에 선택했던 무기라면
            if(lock[w]) continue;

            else
            {
                //시간이 최소로 걸리는 무기를 선택
                
                //잠그기
                lock[w] = true;

            }
        }
        //잠금 해제

        result += min;
    }

    cout << result << "\n";
    return 0;
}