#include <iostream>
#include <conio.h>
#include <bbdal.h>
using namespace std;

int say(node* list)
 {
 int i = 1;
if(list!=NULL)
{
node* ylist=list;
do{
    i=i+1;
    list=list->link;
}
while(list!=ylist);
}
cout << i << endl;
return(i);
 }



void dumplista(node* list)
{
int i=1;

while(list!=NULL)
  {
  cout << "Listenin " << i++ << ".Nodunun Adresi=" << list
                           << " Datasi= " << list -> data 
                           << " Linki= " << list -> link << endl; 
  list = list -> link;
  }
}    



void ayir(node*& node_) 

{
 int sayilan;
 int sonuc;
 sayilan = say(node_);
 sonuc = sayilan%2;
 if(sonuc=0);
 {
  node_ = node_->link ; 
  node_->link=NULL;  
}
}







int main()
{
int sayi;
node* maas = NULL;
addhead(newnode(),maas);
maas->data=500;
addhead(newnode(),maas);
maas->data=200;
dumplist(maas);
ayir(maas);
cout << "---------------------------------------------" << endl;
dumplista(maas);   
system("pause");
return 0;   
}
