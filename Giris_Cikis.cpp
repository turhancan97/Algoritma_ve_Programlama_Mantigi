#include<stdio.h>
#include <string.h>
#include<iostream> // giri� �ikis k�t�phanesi
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
	cin.get(x); // girilen kelime veya say�n�n ilk hanesini al�r.
	
	cout << tamSayi<<endl<<ondalikSayi<<endl<<kelime;

}
