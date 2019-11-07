/*
 * anagramy.cpp


 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int r = 4;
	char napis[] ="krab";
    int i1, i2, i3, i4;
    
    i2 =1; i3 = 2; i4 = 3;
    for (i1 = 0; i1 < r; i1++) {
        for (i2 = 0; i2 < 4; i2++){
            if (i1 == i2) continue;
            for (i3 = 0; i3 < 4; i3++){
                if (i2 == i3 || i1 == i3 ) continue;
                for (i4 = 0; i4 < 4; i4++){
                   if (i4 == i1 || i2 == i4 || i4 == i3 ) continue; 
             cout << napis[i1] << napis[i2] << napis[i3] <<napis[i4] << endl;
            }
        }
    }
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

