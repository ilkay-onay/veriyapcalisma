#include <iostream>
#include <conio.h>
#include <bbdal.h>
using namespace std;

int say(node* list)
{
int i=1;
if(list!=NULL)
{
node* ylist=list;
do{
     i=i+1;
     list=list->link;
     }while(list!=ylist);
 }
return(i);
}


int karsilastir(node* node1,node* node2)
{
 int a = 0;
 if((node1->link==NULL) && (node2->link==NULL))
  if(node1->data==node2->data)
  a+=1;
 if(say(node1)==say(node2))
  if(node1->data==node2->data)
  a+=1;
 return a;
}

int main()

{
node* liste1 = NULL;
node* liste2 = NULL;
addhead(newnode(),liste1);
cin >> liste1->data;
addhead(newnode(),liste2);
cin >> liste2->data;
int a = karsilastir(liste1,liste2);
if(a==1)
cout << "listeler ayni" << endl;
if(a==0)
cout << "listeler farkli" << endl;
system("pause");
return 0;
}
