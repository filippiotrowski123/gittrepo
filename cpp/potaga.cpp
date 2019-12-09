/*
 * silnia.cpp
    */
#include <iostream>
using namespace std;

long int potega_it(float x, int n){
	long int potega = 1;
	for(int i = 2; i < n+1; i++){
		potega = potega*x;
		}
	return potega;
	}


float potega_rek(float x, int n) {
    if (n == 0) return 1;
    else
    return potega_rek(x, n-1) * x;
}

int main(int argc, char **argv)
{
	//int n;
	//cout << "Podaj liczbę naturalną " << endl;
	//cin >> n;
	//cout << "Silnia: " << potega_it(n)<< endl;
	//cout << "Silnia: " << silnia_re(n)<< endl;
	float x;
    int n;
    cout << "Podaj podstawę: " << endl;
    cin >> x;
    cout << "Podaj wykładnik: " << endl;
    cin >> n;
    cout << "Potęga: " << potega_rek(x, n);
    
    
    return 0;
}
