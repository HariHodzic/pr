#include<iostream>
using namespace std;
int main()
{
  double niz[10]={0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
  cout<<sizeof(double)<<endl;
  cout<<sizeof(niz)<<endl;
  double *p;
  p=niz;
  for(int i=0;i<10;i++)
    cout<<*(p++)<<endl;
  cout<<"Prvi nacin "<< niz[3]<<endl;
  cout<<"Drugi nacin "<< *(niz+3)<<endl;
  cout<<"Treci nacin "<<*(p+3)<<endl;
  cout<<"Cetvrti nacin "<<p[3]<<endl;
  return 0;
}
