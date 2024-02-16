#include <vector>
#include <iostream>
using namespace std;

long long sum(std::vector<int> &a) {
	long long ans = 0;
    for(int i = 0; i < a.size(); i++)
    {
        ans += a[i];
    }
	return ans;
}

int main()
{
    vector<int> num;
    int n,temp;
    cin >> n;
    for(int i = 0; i < n; i++) 
    {
        cin >> temp;
        num[i] = temp;
    }
    
    cout << sum(num) << endl;
    return 0;
}