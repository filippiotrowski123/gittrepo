/*
 * silnia.cpp
    */
#include <iostream>

using namespace std;

void drukujw(int n, float tbwsp[])
{
    int i = 0;
    for (i = 0; i < n; i++) {
        cout << tbwsp[i] << "x^" << n-i << " + ";
    }
    cout << tbwsp[i] << endl;
}

float horner_re(int n, float tbwsp[], float x)
{
    if(n == 0) return tbwsp[0];
    
    return x*horner_re(n-1, tbwsp, x) + tbwsp[n];    
}

float horner_it(int n, float tbwsp[], float x) 
{
    // 0, 1, 2, 3
    // x (x (2x + 3) + 5) + 4
    float wynik = tbwsp[0];
    for (int i = 1; i < n+1; i++) {
        wynik = wynik * x + tbwsp[i];
    }
    return wynik;
}

int main(int argc, char **argv)
{
    float x = 0;
    
    int stopien = 0;
    cout << "Podaj stopień wielomianu: ";
    cin >> stopien;
    
    float *tbwsp; //wskaźnik to zmienna, która przechowuje adres komórki w pamięci
    tbwsp = new float [stopien + 1]; //alokacja tablicy dynamicznej
    
    //typ wskaźnika i typ tablicy muszą być takie same
    
    for (int i = 0; i <= stopien; i++)
    {
        cout << "Podaj współczynnik przy potędze " 
             << stopien - i << ": ";
        cin >> tbwsp[i];
    }
    
    cout << "Podaj argument x: ";
    cin >> x;
    
    cout << "\nWartość wielomianu o postaci ";
    drukujw(stopien, tbwsp);
    cout << "dla x = " << x << " wynosi: " 
         << "\niteracyjnie: " << horner_it(stopien, tbwsp, x)
         <<"\nrekurencyjnie: " << horner_re(stopien, tbwsp, x);
         
    cout << endl;
    
	return 0;
}
