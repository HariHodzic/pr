#include<iostream>
#include<string.h>
#include <stdlib.h>
using namespace std;

struct Student{
char ime[30];
int godinaRodjenja;
};

int main()
{
Student ja;
//pokazivač na objekat tipa Student
Student *pok = &ja;
//atributima objekta preko pokazivača pristupamo
//koristeci operator strelicu (->)
pok->godinaRodjenja = 1978;
strcpy(pok->ime,"Jasmin Azemovic");
cout<<pok->ime<<" "<<ja.godinaRodjenja<<endl;
system("pause");
}
