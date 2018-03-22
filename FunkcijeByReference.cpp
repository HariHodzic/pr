#include<iostream>
using namespace std;

void unos(int * , int);
void ispis(int *, int );
int najveci(int *, int);

int main()
{
  int najvecia;
  const int a=5;
  int niz[a];
  unos(niz, a);
  ispis(niz,a );
  cout<<"Najveci element niza je "<< najveci(niz,a)<<endl;
  najvecia=najveci(niz, a);
  system("pause");
}
void unos(int *niz, int a)
{
  for(int i=0;i<a;i++)
  {
    cout<<"Unesite "<< i<<". vrijednost niza: "<<endl;
    cin>>*(niz+i);
  }
}
void ispis(int *niz, int a)
{
  for(int i=0;i<a;i++)
  {
    cout<<"\t"<<*(niz+i)<<endl;
  }
}
int najveci(int *niz, int a)
{
  int max=0;
  for (int i=1; i<a; i++)
  {
    if(*(niz+i)> max)
      max=(*niz+i);
  }
  return max;
}
