/*
 * tab2.cpp

 */

#include <iostream>

#include <iomanip>

using namespace std;

#define w	5

#define k	10


int main(int argc, char **argv) 
{
    
	int tab[w][k];
    
    int i, j;
    
    srand(time(NULL));
	
    int n;
    
    cout << "Podaj zakres wartości losowych: ";
    
    cin >> n;
    
    for(i = 0; i < w; i++) 
    {
        for(j = 0; j<k; j++)
         {
            
            tab[i][j] = (rand()%n+1);
            
            cout << tab[i][j] << "  ";
}
        cout << endl;
}





	return 0;
}
