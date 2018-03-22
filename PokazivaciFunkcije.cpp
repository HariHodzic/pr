#include <iostream>
using namespace std;

void Funkcija1(int a, int b)
{
  cout<<a+b<<endl;
}

int main()
{
  string crt="___________________________\n";
  cout<<Funkcija1<<endl;       //ISPISUJE ADRESU funkcije
  cout<<&Funkcija1<<endl;      //ISPISUJE ADRESU funkcije
  cout<<crt;
 void  (*pokazivac) (int,int)=nullptr;
// tip funkcije - ime pokazivača - tip i broj parametara */

pokazivac=Funkcija1; //mogao se koristiti &, ali nije potrebno
Funkcija1(5,5);
cout << crt;
pokazivac(5,5);


}
