// Fonksiyon Kullanýmý
#include <iostream>
using namespace std;

//Fonksiyonumuz
int Topla (int sayi1, int sayi2)
{
	int sonuc = sayi1 + sayi2;
	return sonuc;
}	
	int a,b;


int main()
{
	
	
	cout << "1. sayiyi giriniz : ";
	cin >> a;

	cout << "2. sayiyi giriniz : " ;
	cin >> b;
	
	int sonuc = Topla(a,b);
	cout << "Toplam =  " << sonuc << endl;
}
