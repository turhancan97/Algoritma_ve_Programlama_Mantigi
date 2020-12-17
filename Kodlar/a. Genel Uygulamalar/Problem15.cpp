#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int baslangic,bitis,adim,toplam;
	cout << "Baslangic degerini giriniz : ";
	cin >> baslangic;
	cout << "Bitis degerini giriniz : ";
	cin >> bitis;
	cout << "Adim degerini giriniz : ";
	cin >> adim;
	for(int i=baslangic; i<=bitis; i+=adim)
	{
		toplam+=i;
	}
	cout << "Toplam = " << toplam;
}