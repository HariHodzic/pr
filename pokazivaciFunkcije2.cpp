#include<iostream>
using namespace std;
int * GetNajveci(int niz[],int max)
  {
    int lokacija = 0;
      for(int i=1;i<max;i++)
        if(niz[lokacija]<niz[i])
          lokacija=i;
    return &niz[lokacija];
  }
int main() {
const int max = 5;
int niz[max] = {22,3,17,99,40};
//pokazivac na funkciju koja vraca pokazivac na int
int * (*GetNajveciPok)(int niz[],int max) = GetNajveci;
int * najveci = GetNajveciPok(niz,max-1);
cout<<"Najveci: "<<*najveci<<endl;
}
