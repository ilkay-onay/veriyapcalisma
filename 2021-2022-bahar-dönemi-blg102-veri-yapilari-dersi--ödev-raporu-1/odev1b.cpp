#include <iostream>
#include <conio.h>
#include <bbdol.h>

using namespace std;

int main()

{
node* maas = NULL;
addhead(newnode(),maas);
addhead(newnode(),maas);
addhead(newnode(),maas);
cuthead(maas);
dumplist(maas);
system("pause");
return 0;
}
