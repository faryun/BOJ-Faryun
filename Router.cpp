#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int size;
    cin >> size;
    deque<int> router;

    while (true)
    {
        int n;
        cin >> n;
        if(n == -1) 
        {
            if(router.empty()) cout << "empty";
            else for(auto o : router) cout << o << " ";
            break;
        }
        if(n == 0) router.pop_front(); 
        else
        {
            if(router.size() < size) router.push_back(n);
        }
    }
    
    return 0;
}