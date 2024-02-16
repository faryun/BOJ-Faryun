#include <iostream>

using namespace std;

int main()
{
    int array[100], n, find, result = 0;
    cin >> n;
    
    for(int i = 0;i < n; i++) cin >> array[i];
    
    cin >> find;

    for(int j = 0;j < n; j++) if(array[j] == find) result++;
    
    cout << result << endl;
    return 0;
}