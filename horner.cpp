/*
 * horner.cpp

 */


#include <iostream>
using namespace std;

float horner_it(int n, float tbwsp[], float x) {
    int i;
    float wynik = tbwsp [0];
    for (int i = 0; i <= n; i++) {
        wynik = wynik * x + tbwsp[i];
    }
    return wynik;
}

void drukujw (int n, float tbwsp[]) {
    for (int i = 0; i < n; i++) {
    cout << tbwsp[i] <<"x^" << n - i << " + " ;
    }
    cout << tbwsp[n];
}
    
int main(int argc, char **argv)
{
    int n = 0;
    float x;
	float *tbwsp;
    cout << "Podaj stopień: "; cin >> n;
    tbwsp = new float [n + 1];
    cout << "Podaj argument: "; cin >> x;
    for (int i = 0; i <= n ; i++) {
        cout << "Podaj współczynnik przy potędze: "<< n - i << ": ";
        cin >> tbwsp[i];
        }
    cout << "Wartość wielomianu o postaci: ";
    drukujw(n, tbwsp);
    
    
    cout << horner_it(n , tbwsp, x) << endl;
    
    
    
	return 0;
}

