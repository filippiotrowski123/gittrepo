/*
 * kodowanie.cpp
 */
#include <iostream>
using namespace std;
void koduj(char tabzn[],int rozmiar){
	cout << "Podaj tekst do zakodowania (max liczba "<< rozmiar <<" znaków): ";
	cin >> tabzn;
	for (int i = 0; i< rozmiar; i++){
		cout << (int)tabzn[i]<<" ";
	}
}
void litery2liczby (char tabzn[], int rozmiar){
    for(int i =  0; i < rozmiar; i++){
    cout<< (int)tabzn[i] << endl;
}
}
void dekoduj(int kod[], int rozmiar){
    cout << "Podaj liczby do dekodowania: "<< endl;
	for(int i = 0; i < rozmiar; i++){
	cin >> kod[i];
}
	cout<< "Twoj tekst zdakodoway: " << endl;
	for (int i= 0; i < rozmiar; i++){
		cout<< (char)kod[i];

}
}
int main(int argc, char **argv)
{
	int rozmiar = 20;
	char napis[rozmiar];
	int kod[rozmiar];
	koduj(napis, rozmiar);
	cout << endl;
	dekoduj(kod, rozmiar);
	return 0;
}
