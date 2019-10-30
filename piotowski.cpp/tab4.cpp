/*
 * tab4.cpp
 * 

 */


#include <iostream>
#include <iomanip>

using namespace std;
int main(int argc, char **argv)
{
	int tab1[5][7];
    int i, j;
    float r;
    cout << "Podaj wartość o którą zwiekszymy";
    cin >> r;
    float a;
    cout << "Podaj pierwszą liczbe";
    cin >> a;
    
    for(i = 1; i<5; i++){
        for(j = 0; j<7; j++){
            tab1[i][j] = a;
            a+=r;
            cout << tab1[i][j] << " " ;
        }
            cout << endl;
}
	return 0;
}

