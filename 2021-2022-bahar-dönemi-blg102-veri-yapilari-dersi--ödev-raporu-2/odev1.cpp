#include <iostream>
#include <conio.h>

using namespace std;

struct node
{
    int data;
    node* blink;
    node* flink;
};

node* list=NULL;
node* l1=NULL;
node* l2=NULL;
    
void dumplist(node* list)
{
int i =1;
while(list!=NULL)
{
     cout<<"Listenin " <<i++<<".Nodunun Adresi= "<<list
                            <<"Datasi = "<<list ->data
                            <<"BLinki="<<list->blink
                            <<"FLinki="<<list->blink<<endl;
 list=list->flink;
 }
}


node* newnode()
{
node* newnode=new node;
newnode->blink=NULL;
newnode->flink=NULL;
return(newnode);
}


void addhead(node* node_,node*& list)
{
 if(list!=NULL){
     node_->flink=list;
     list->blink=node_;
 }
 list=node_;
}

    
node* cuthead(node*& list)
{
 node* cuthead= list;
 if(list!=NULL)
 if(list->flink==NULL) list=NULL;
 else{
     list=list->flink;
     list->blink=NULL;
     cuthead->flink=NULL;
     }
 return(cuthead);
}
     


int main()
{
node* maas=NULL;

addhead(newnode(),maas);
addhead(newnode(),maas);
dumplist(maas);
cout <<"-----------------------------------------------------cuthead-------------------------------------------"<< endl;
cuthead(maas);
dumplist(maas);

system("pause");
return 0;

}
