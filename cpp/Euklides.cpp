/*
 * Euklides.cpp
 */


#include <iostream>
using namespace std;
int nwd(int a, int b) {
    
    int licznik = 0;
    while (a != b) {
        if (a > b) {
            a = a -b;
            }
        if (a < b) {
            b = b - a;
            }
        licznik+=1;
        }
    cout << " Powtórzeń: " << licznik << endl;
    return a;
}

int main(int argc, char **argv)
{
     
    int a, b;
    cout << "Podaj liczbe a i b: ";
    cin >> a;
    cin >>b;
    cout << "NWD " << nwd(a, b);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

