/*
 * reszta.cpp
 */
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
int B[8]={200, 100, 50, 20, 10, 5, 2, 1};
int R,K, i;

cout << "Podaj wpłatę: ";
cin >> R;

i=0;
while (R>0)
{
if (R >= B[i])
{
K=R / B[i];
R=R-(B[i]*K);
if (B[i] >= 10){
cout << K << " Liczba banknotow " << B[i] <<" zł"<<endl;
}
else
    cout << K << "Liczba monet " << B[i] <<" zł"<<endl;
}
i++;
}


return 0;
}
