#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int time[1000];
    int n;
    int result = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> time[i];
    }

    sort(time,time+n);
    
    for(int j = 0; j < n; j++)
    {
        int temp = 0;
        for(int l = 0; l <= j; l++)
        {
            temp += time[l];
        }
        
        result += temp;
    }

    cout << result << endl;
    return 0;
}
