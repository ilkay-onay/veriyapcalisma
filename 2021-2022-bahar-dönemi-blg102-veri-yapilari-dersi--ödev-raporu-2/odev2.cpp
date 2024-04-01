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

void nodesil(node*& node_)
{
 node* isaret=node_;
 isaret = isaret->link;
 isaret = isaret->link;
 isaret ->link=NULL;
 node_->link=NULL;
} 







int main()
{
int sayi;
node* maas = NULL;
addhead(newnode(),maas);
maas->data=500;
addhead(newnode(),maas);
maas->data=200;
addhead(newnode(),maas);
maas->data=0;
dumplist(maas);
sayi = say(maas);
nodesil(maas);
cout << "---------------------    " << sayi - 2  << "       ------------------------" << endl;
dumplista(maas);   
system("pause");
return 0;   
}
