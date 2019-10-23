/*
 * dekoduj.cpp

 */


#include <iostream>
using namespace std;

using namespace std;
void ascii() {
    int i = 0;
    for (i = 65; i < 91; i++) {
        cout << i << " - " << char(i) << endl;
    }
}

void koduj(char tabzn; rozmiar) {
    ;
}
void dekoduj(int tabliczb; rozmiar) {
    ;
}

int main(int argc, char **argv)
{
    int rozmiar = 11;
    char napis[rozmiar] = "Ala ma kota!";   
    koduj(tekst, rozmiar);
    int szyfr[11] = {65, 78, 90};
    dekoduj(szyfr,rozmiar);
    //ascii();
    //litery2liczby(napis, rozmiar);
	return 0;
}

