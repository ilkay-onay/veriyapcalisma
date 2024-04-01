#include <iostream>
#include <fstream>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
using namespace std;

struct mininode
     {
     string tarih;
     int urunsayisi;
     float harcama;
     node* link;
     };

struct node
{
    int data;
    node* dlink;
    mininode* flink;
};

listeyeaktar(node* node_,int k,int t,int s,float h) 
{
 satis1->data = 7
 satis1->flink->tarih = "15.02.2022/15:02"
 satis1->flink->urunsayisi = 2
 satis1->flink->harcama = 54.36
 satis2->data = 7
 satis2->flink->tarih = "27.03.2022/10:54"
 satis2->flink->urunsayisi = 5
 satis2->flink->harcama = 106.82
 satis3->data = 7
 satis3->flink->tarih = "02.04.2022/14:12"
 satis3->flink->urunsayisi = 2
 satis3->flink->harcama = 15.25
 satis4->data = 4
 satis4->flink->tarih = "11.01.2022/11:02"
 satis4->flink->urunsayisi = 7
 satis4->flink->harcama = 312.34
 satis5->data = 5
 satis5->flink->tarih = "14.01.2022/19:50"
 satis5->flink->urunsayisi = 3
 satis5->flink->harcama = 75.12
 satis6->data = 4
 satis6->flink->tarih = "08.02.2022/18:05"
 satis6->flink->urunsayisi = 4
 satis6->flink->harcama = 80.45
 
    
yaz        << satis1->data << " " << satis1->flink->tarih << " " << satis1->flink->urunsayisi << " " <<  satis1->flink->harcama
    << " " << satis2->data << " " << satis2->flink->tarih << " " << satis2->flink->urunsayisi << " " <<  satis2->flink->harcama
    << " " << satis3->data << " " << satis3->flink->tarih << " " << satis3->flink->urunsayisi << " " <<  satis3->flink->harcama
    << " " << satis4->data << " " << satis4->flink->tarih << " " << satis4->flink->urunsayisi << " " <<  satis4->flink->harcama
    << " " << satis5->data << " " << satis5->flink->tarih << " " << satis5->flink->urunsayisi << " " <<  satis5->flink->harcama
    << " " << satis6->data << " " << satis6->flink->tarih << " " << satis6->flink->urunsayisi << " " <<  satis6->flink->harcama
    << " " << satis7->data << " " << satis7->flink->tarih << " " << satis7->flink->urunsayisi << " " <<  satis7->flink->harcama;
    
  ifstream oku("satis.txt");
oku >> satis1->data >> satis1->flink->tarih >> satis1->flink->urunsayisi >>  satis1->flink->harcama
    >> satis2->data >> satis2->flink->tarih >> satis2->flink->urunsayisi >>  satis2->flink->harcama
    >> satis3->data >> satis3->flink->tarih >> satis3->flink->urunsayisi >>  satis3->flink->harcama
    >> satis4->data >> satis4->flink->tarih >> satis4->flink->urunsayisi >>  satis4->flink->harcama
    >> satis5->data >> satis5->flink->tarih >> satis5->flink->urunsayisi >>  satis5->flink->harcama
    >> satis6->data >> satis6->flink->tarih >> satis6->flink->urunsayisi >>  satis6->flink->harcama
    >> satis7->data >> satis7->flink->tarih >> satis7->flink->urunsayisi >>  satis7->flink->harcama; 
}




int main()
{
node* satis1 = NULL;
addhead(newnode(),liste1);
addhead(newnode(),liste1);
addhead(newnode(),liste1);
system("pause");
return 0;
}
