#include<stdio.h>
#include <string.h>
int main()
{
char harf = 'K'; // içerisine girilen harfin Unicode karþýlýðýný tutar
char harf2 = 65;// char 1 byte yer tutar iþaretsiz tam sayýlar niteliði taþýr.

short kisaTamsayi = 55; // 2byte yer kaplar,kýsa tam sayýlarý alýr (-32768 ile 32768 arasý)

int tamSayi= 1993;  // 4 byte yer kaplar, orta dereceli sayýlarý tutar. (-2147483648 ile 2147483648 arasý)

float normalKullanim = 5887.45;
float bilimsekullanim = 5E2; // 4byte yerkaplar. Ondalýklý sayýlardýr.

double normal= 871.9607411; // 8 byte yer kaplar. floattan daha uzun sayýlar alabilir.
double bilimsel = 12E5;

unsigned int isaretsizTamSayi = 188546; // Baþýna unsigned eklediðimizde kapasitesi2 katýna çýkar fakat '-' deðer almaz.

string cumle = "c++'da string kullanýmý" // 8byte yer kaplar. Uzun cümleler yazmamýzý saðlar.

bool dogruKarar = true; // boolean 1 byte yer kaplar. 1-0 True-False iþlemlerinde kullanýlýr.
bool karar1 = (10<4);
}
