#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    /* 
        첫째 줄에 자연수 N(1 ≤ N ≤ 100,000)이 주어진다. 
        다음 줄에는 N개의 정수 A[1], A[2], …, A[N]이 주어진다. 
        다음 줄에는 M(1 ≤ M ≤ 100,000)이 주어진다. 
        다음 줄에는 M개의 수들이 주어지는데, 이 수들이 A안에 존재하는지 알아내면 된다.
    */

    //값을 찾을 배열의 사이즈
    int n;

    //찾는 값이 저장되는 배열의 사이즈
    int m;
    
    //값을 찾을 배열
    int n_array[100000];

    //찾는 값이 저장되는 배열
    int m_array[100000];
        
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> n_array[i];
    }
    

    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> m_array[i];
    }
    

    sort(n_array, n_array + n);
    
    for(int i = 0; i < m; i++)
    {
        cout << binary_search(n_array,n_array+n,m_array[i]) << '\n';
    }
    return 0;
}