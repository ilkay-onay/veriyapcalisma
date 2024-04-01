#include <iostream>
#include <conio.h>
#include <bbdal.h>
using namespace std;

float ortalamaal(node* list)
{
int i=0;
float ort=0;
if(list!=NULL)
{
node* ylist=list;
do{
     i=i+1;
     ort += list->data;
     list=list->link;
     }while(list!=ylist);
 }
ort=ort/i;
return(ort);
}

int main()
{
node* liste1 = NULL;
addhead(newnode(),liste1);
cin >> liste1->data;
addhead(newnode(),liste1);
cin >> liste1->data;
addhead(newnode(),liste1);
cin >> liste1->data;
float a = ortalamaal(liste1);
cout << "Ortalama= " << a << endl;
system("pause");
return 0;
}

