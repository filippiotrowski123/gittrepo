/*
 * znaki2.cpp

 */


#include <iostream>
using namespace std;
void ascii() {
    int i = 0;
    for (i = 65; i < 91; i++) {
        cout << i << " - " << char(i) << endl;
    }
}

void litery2liczby(char tabzn[], int rozmiar) {
    
    for (int i = 0; i < rozmiar; i++) {
        cout << tabzn[i] << " - " << (int)tabzn[i] << endl;
    }
}

int main(int argc, char **argv)
{
    
    int rozmiar = 10;
    char napis[rozmiar] = "@mdgjh";   
    int szyfr[11] = {65, 78, 90}
    dekoduj(szyfr,rozmiar)
    ascii();
    litery2liczby(napis, rozmiar);
    
    return 0;
}

