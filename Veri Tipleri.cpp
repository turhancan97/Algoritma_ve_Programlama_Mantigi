#include<stdio.h>
#include <string.h>
int main()
{
char harf = 'K'; // i�erisine girilen harfin Unicode kar��l���n� tutar
char harf2 = 65;// char 1 byte yer tutar i�aretsiz tam say�lar niteli�i ta��r.

short kisaTamsayi = 55; // 2byte yer kaplar,k�sa tam say�lar� al�r (-32768 ile 32768 aras�)

int tamSayi= 1993;  // 4 byte yer kaplar, orta dereceli say�lar� tutar. (-2147483648 ile 2147483648 aras�)

float normalKullanim = 5887.45;
float bilimsekullanim = 5E2; // 4byte yerkaplar. Ondal�kl� say�lard�r.

double normal= 871.9607411; // 8 byte yer kaplar. floattan daha uzun say�lar alabilir.
double bilimsel = 12E5;

unsigned int isaretsizTamSayi = 188546; // Ba��na unsigned ekledi�imizde kapasitesi2 kat�na ��kar fakat '-' de�er almaz.

string cumle = "c++'da string kullan�m�" // 8byte yer kaplar. Uzun c�mleler yazmam�z� sa�lar.

bool dogruKarar = true; // boolean 1 byte yer kaplar. 1-0 True-False i�lemlerinde kullan�l�r.
bool karar1 = (10<4);
}
