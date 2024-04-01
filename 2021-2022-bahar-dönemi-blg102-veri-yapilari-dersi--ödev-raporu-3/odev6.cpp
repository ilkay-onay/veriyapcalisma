#include <iostream>
#include <conio.h>
#include <bbdal.h>
using namespace std;

node* lastr(node* list)
{
    int count=0;
    if(list==NULL) return list;
    else lastr(list->link);
    return list;
}

