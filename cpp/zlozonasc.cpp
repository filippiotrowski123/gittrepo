/*
 * zlozonasc.cpp
*/
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int i = 0;
    int n = 5;
    int tab[5] = {3, 5, 8, 1, 9};
    int x = 7;
    for (i = 0; i < n; i++) {
        if (tab[i] == x){
            cout << i;
            return 0;
        }
    }
    cout << -1;
	
    return 0;
}

