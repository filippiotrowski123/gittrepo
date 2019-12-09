/*
 * euklidesop.cpp

 */


#include <iostream>
using namespace std;
int nwd_op(int a, int b){
    
    int licznik = 0;
    while (a > 0) {
    a = a % b;
    b = b - a;
    licznik++;
    }
    cout << " Powtórzenia: " << licznik << endl;
    return b;
}

int main(int argc, char **argv)
{
	  int a, b;
    cout << "Podaj a i b: ";
    cin >> a;

    cin >>b;
    cout << "Największy wspólny dzielnik: " << nwd_op(a, b);
	return 0;
}

