#include <iostream>
#include <conio.h>
#include <bbdol.h>

using namespace std;

int main()

{
node* maas = NULL;
addhead(newnode(),maas);
maas->data=500;
node* gelir = NULL;
gelir = copy(maas);
cout << "GELIR = ";
dumplist(gelir);
cout << "MAAS = ";
dumplist(maas);

system("pause");
return 0;
}
