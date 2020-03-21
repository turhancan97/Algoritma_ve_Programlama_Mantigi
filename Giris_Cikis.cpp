#include<stdio.h>
#include <string.h>
#include<iostream> // giriþ çikis kütüphanesi
using namespace std;
int main()
{
	int tamSayi;
	double ondalikSayi;
	string kelime;
	
	cin >> tamSayi;
	cin >> ondalikSayi;
	cin >> kelime;
	
	char x;
	cin.get(x); // girilen kelime veya sayýnýn ilk hanesini alýr.
	
	cout << tamSayi<<endl<<ondalikSayi<<endl<<kelime;

}
