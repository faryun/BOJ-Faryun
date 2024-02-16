#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long byte[50], cluster, result = 0, size = 0, temp;
    
    //입력
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> byte[i];
    }
    cin >> cluster;

    for(int j = 0; j < n; j++)
    {
        //0이면 패스
        if(byte[j] == 0) continue;
        
        else
        {
            size += byte[j] / cluster;
            
            if(byte[j] % cluster != 0) size++;
        }
    }

    result = cluster * size;
    cout << result;
    return 0;
}