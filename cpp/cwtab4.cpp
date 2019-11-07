/*
 * cwtab4.cpp
 */
#include <iostream>
#include <cstring>

using namespace std;
#define Rozmiar 100
int main( int argc, char ** argv ) {
  
	char tekst[Rozmiar];
    int i = 0;
    cout << "Podaj wyraz:" << endl;
    cin.getline(tekst, Rozmiar);
    for (i = strlen(tekst); i>=0; i--){
        cout <<tekst[i-1];
    }
    cout << endl;
   
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    


