#include <iostream>
using namespace std;
/* function declaration */
void swap(int x, int y)
{
int temp;

  temp = x; /* save the value of x */
  x = y;    /* put y into x */
  y = temp; /* put temp into y */
  cout<<"In swap, value of a :\n"<<x<<endl;
  cout<<"In swap, value of b : \n"<<y<<endl;
return;
 }
int main () {

   /* local variable definition */
   int a = 100;
   int b = 200;

   cout<<"Before swap, value of a :\n"<<a<<endl;
   cout<<"Before swap, value of b : \n"<<b<<endl;
   /* calling a function to swap the values */
   swap(a, b);

   cout<<"After swap, value of a :\n"<<a<<endl;
   cout<<"After swap, value of b : \n"<<b<<endl;

   return 0;
}
