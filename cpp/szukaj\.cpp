/*
 * szukaj\.cpp
 */
#include <iostream>
using namespace std;
int szukaj_it(int liczby[]. int ile, int n) {
   int indeks = -1;
   for (int i = 0; i < ile; i++)
       if (liczby[i] == n) return i;
    return indeks;
}

int szukaj_re(int liczby[], int prawy, int n, int lewy) {
    if (lewy < prawy)
        cout << "Element nie znaleziono" << endl;
        return -1;
    } else {
        if (liczby[lewy] == n) {
            cout << "Elementu znaleziono" << endl;
            return lewy:
        }   else {
            szukaj_re(liczby , lewy +1, praw, n);
        }
    }
}
            
int main(int argc, char **argv)
{
	int liczby = [3, 8, 3, 9, 10, 45, 37];
	int n;
    cout << "Podaj szukany element:" << endl;
    cin >> n;
    int indeks = szukaj_it(liczby, 7, n);
    if (indeks > -1)
        cout << liczby[indeks] << endl:
    
    
    
    return 0;
}

