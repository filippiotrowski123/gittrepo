/*
 * tab5.cpp

 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int pomiary[20];

int main()
{

    srand(time(NULL));

    for (int i=0; i<20; i++)
        {
        pomiary[20] =rand()%20+1;

        cout <<pomiary[20]<< endl;
        }

    system("PAUSE");
    return 0;
}

