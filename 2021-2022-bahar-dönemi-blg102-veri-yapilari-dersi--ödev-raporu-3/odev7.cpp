#include <iostream>
#include <conio.h>
#include <bbdal.h>
using namespace std;

void dumplista(node* list,int i)
{
    if (list->link!=NULL) {
        i+=1;
             cout<<"Listenin " <<i++<<".Nodunun Adresi= "<<list
                            <<"Datasi = "<<list ->data
                            <<"Linki="<<list->link<<endl;
     list=list->link;
     dumplista(list->link,i);
        
    }    
}
