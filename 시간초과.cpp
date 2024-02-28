#include <iostream>
#include <cmath>
using namespace std;

int fact(int n)
{
    if(n <= 1) return n;
    return n * fact(n-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int C;
    cin >> C;

    for(int c = 0; c < C; c++)
    {
        string s;
        bool pass = true;
        long long int check = 100000000;
        long long int n, t, l;
        long long int test;

        cin >> s >> n >> t >> l;
        check *= l;
        check /= t;

        if(s == "O(N)")
        {
            test = n;
            if(test > check) pass = true;
        }

        else if(s == "O(N^2)")
        { 
            test = n * n;
            if(test > check) pass = false;
        }
        
        else if(s == "O(N^3)")
        { 
            test = n * n * n;
            if(test > check) pass = false;
        }
        
        else if(s == "O(2^N)" && pow(2,n) > check) pass = false;
        
        else if(s == "O(N!)")
        {
            if(n >= 13) pass = false;
            else test = fact(n);
            
            if(test > check) pass = false;
        }

        if(pass) cout << "May Pass." << '\n';
        else cout << "TLE!" << '\n';
    }

    return 0;
}