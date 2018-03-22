#include<iostream>
using namespace std;

int main()
{
  float broj1, broj2;
  broj1= 7.3;
  float *pokazivac;
  pokazivac= &broj1;
  cout<<"Ispis *pokazivac je :"<<*pokazivac<<endl;
  broj2=*pokazivac;
  cout<<"Vrijednost varijable broj2 iznosi "<<broj2<<endl;
*pokazivac= 1.3;
cout<< broj1<<endl;
pokazivac=0;
pokazivac=&broj2;
cout<<pokazivac;

}
