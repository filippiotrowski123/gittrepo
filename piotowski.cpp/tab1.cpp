/*
 * tab1.cpp

 */
#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char **argv)
{
    int w = 5;
    int suma1=0;
    int suma2=0;
    int j;
    int tab1[w]; 
    int tab2[w]; 
    
    for( j=0; j<w ; j++){
        cout<<"podaj liczbę z seri pierwszej  :";
        cin >> tab1[j];
	}
    for(j=0; j<w ; j++){
        cout<<"podaj liczbę z seri drugiej :";
        cin >> tab2[j];
	
    }
    for(j= 0; j< w; j++)
    {
        suma1 +=tab1[j];
    }
    for(j= 0; j< w; j++)
    {
        suma2 +=tab2[j];
    }
    if(suma1 > suma2){
        cout<<"suma tablicy1 jest większa od sum tablicy2"<<endl;
    }
    else{
        cout<<"suma tablicy2 jest większa od sum tablicy1"<<endl;
    }    
	return 0;
}
