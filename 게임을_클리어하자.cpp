#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    int result = 0;
    cin >> n >> m;
    int min_idx = -1;

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
            if(w == min_idx) continue;
            else
            {
                //시간이 최소로 걸리는 무기를 선택
                if(stat[w] < min)
                {
                    min = stat[w];
                    //잠그기
                    min_idx = w;
                }
            }
        }
        cout << min << " " << min_idx << endl;
        result += min;
    }

    cout << result << "\n";
    return 0;
}