#include <iostream>

using namespace std;

int main()
{
    int re = 0, pt = 0, cc = 0, ea = 0, tb = 0, cm = 0, ex = 0, total = 0;
    string str;

    while (!cin.eof())
    {
        cin >> str;
        if(str == "Re") re++;
        else if(str == "Pt") pt++;
        else if(str == "Cc") cc++;
        else if(str == "Ea") ea++;
        else if(str == "Tb") tb++;
        else if(str == "Cm") cm++;
        else if(str == "Ex") ex++;
        total++;
    }
    
    printf("Re %d %.2f\n",re, (double)re / total);
    printf("Pt %d %.2f\n",pt, (double)pt / total);
    printf("Cc %d %.2f\n",cc, (double)cc / total);
    printf("Ea %d %.2f\n",ea, (double)ea / total);
    printf("Tb %d %.2f\n",tb, (double)tb / total);
    printf("Cm %d %.2f\n",cm, (double)cm / total);
    printf("Ex %d %.2f\n",ex, (double)ex / total);
    printf("Total %d 1.00",total);

    return 0;
}