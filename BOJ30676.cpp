#include <iostream>

using namespace std;

int main()
{
    int wavelength;
    cin >> wavelength;
    
    if(wavelength >= 620) cout << "Red" << endl;
    else if(wavelength >= 590) cout << "Orange" << endl;
    else if(wavelength >= 570) cout << "Yellow" << endl;
    else if(wavelength >= 495) cout << "Green" << endl;
    else if(wavelength >= 450) cout << "Blue" << endl;
    else if(wavelength >= 425) cout << "Indigo" << endl;
    else if(wavelength >= 380) cout << "Violet" << endl;

    return 0;
}