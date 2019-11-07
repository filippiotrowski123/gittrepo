/*
 * cwtab5.cpp

 */

#include <iostream>
#include <cstring>
#define ROZMIAR 15

using namespace std;


int main(int argc, char **argv)
{
	char tekst[ROZMIAR];
    int j;
    cout<<"Podaj wyrazy: "<<endl;
    cin.getline(tekst, ROZMIAR);

for(j = 0; j < (int)strlen(tekst); j++){
	if(wyraz[j]>95 && wyraz[j] < 127){
	  	cout<<(char)(tekst[j]-32);
	}
	else if(wyraz[j] == 32){
		cout<<(char)(tekst[j]);
		}
	else if(wyraz[j]>40 && wyraz[j] < 91){
	  	cout<<(char)(wyarz[j]+32);
	}
}

    
	return 0;
}

