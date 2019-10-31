/*
 * tekst.cpp

 */


#include <iostream>
#define ROZMIAR 100

using namespace std;
int main(int argc, char **argv)
{
	char tekst[ROZMIAR];
    int i;
    cout << "Podaj imię i nazwisko:" << endl;
    //cin >> tekst;
    cin.getline(tekst, ROZMIAR);
    //cout << tekst;
	for (i=0; i < ROZMIAR; i++) {
        cout << tekst[i];
    }
    cout << endl;
    
    i = 0; 
    while (tekst[i] != '\0') {
        cout << tekst[i];
        i++; 
    }
    cout << endl;

    
    int x=1;
    string tekst;
    cout<<"Wprowadz tekst:\n";
    getline(cin,tekst);
 
    int l=tekst.length();
 
    for (int i=0;i<l;i++)
    {
        if (tekst[i]==' ')
        x++;
    }
    cout<<"Ilosc wyrazow wynosi: "<<x;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

