/*
 * 12_110_Piotrowski.cpp
 */
#include<iostream>
using namespace std;
void dzielniki_liczby_p(int *&tab, int p) {
	int n=1;
	tab = new int[p];
	for(int i=0;i<p;i++) {
		if(p%n==0) {
			tab[i]=n;
			n++;
		}
		else {
			tab[i]=0;
			n++;
		}
	}
}
void wyswietl(int *tab,int p) {
        for(int i=0;i<p;i++)
        {
        	if(tab[i]>0) {
        		cout<<tab[i]<<" ";
    		}
        }
        cout<<endl;
}


int main(int argc, char** argv) {
	int p;
	int *tab;
	cout<<"Podaj liczbe p:"<<endl;
	cin>>p;
	dzielniki_liczby_p(tab,p);
	cout<<"Znalezione dzielniki to:"<<endl;
	wyswietl(tab,p);
	cout<<"Dzielniki posortowane malejaco:"<<endl;
	wyswietl(tab,p);
	
	return 0;
}
