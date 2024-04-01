#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <bbdil.h>
using namespace std;

int say(node* node_)
{
int sayi = counttree(node_);  
return sayi;
}

int main()
{
node* agac = NULL;
inserttree(agac,newnode());
inserttree(agac,newnode());
inserttree(agac,newnode());
printtree(agac);
cout << "node sayisi : " << say(agac) << endl;
    
system("pause");
return 0;
}
