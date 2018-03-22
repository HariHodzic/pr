#include<iostream>
using namespace std;

int main()
{
  string crt="--------------------------\n";
  double niz[10]={1,2,3,4,5,6,7,8,9,10};

  cout<<sizeof(double)<<endl;
  cout<<sizeof(niz)<<endl;

  double * pokazivac= niz;
  cout<<crt;
  for(int i=0;i<10;i++)
    cout<<niz[i]<<endl;
  cout<<crt;
  for(int i=0;i<10;i++)
  {
      pokazivac=&niz[i];
      cout<<*pokazivac<<endl;
  }
  cout<<crt;
  pokazivac=niz;
  for(int i =0;i<10;i++)
    cout<<*(pokazivac+i)<<endl;

  pokazivac=niz;
  cout<<crt;
  for(int i=0;i<10;i++)
    cout<< pokazivac[i] << '\n';
}
