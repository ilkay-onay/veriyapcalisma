#include <iostream>
#include <conio.h>
#include <bbdal.h>
using namespace std;

float ortalama(node* list,float ort,int i)
{
if (list!=NULL)
{
     i=i+1;
     ort += list->data;
     ortalama(list->link,ort,i);
 }
 else
 {    
     ort = ort/i;
cout << "Ortalama= " << ort << endl;
     return ort;
 }
}

int main()
{
float ort = 0;
int i = 0;
node* liste1 = NULL;
addhead(newnode(),liste1);
cin >> liste1->data;
addhead(newnode(),liste1);
cin >> liste1->data;
addhead(newnode(),liste1);
cin >> liste1->data;
last(liste1)->link=NULL;
float a = ortalama(liste1,ort,i);
system("pause");
return 0;
}

