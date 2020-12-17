#include<iostream>
using namespace std;

int Faktoriyel(int sayi)
{
	int sonuc=1;
	for(int i=1; i<=sayi; i++)
	{
		sonuc*=i;
	}
	return sonuc;
}
int main()
{
	int sayi;
	cout << "Faktoriyeli alinacak sayiyi giriniz : ";
	cin >> sayi;
	int sonuc=Faktoriyel(sayi);
	cout << "Faktoriyel = " << sonuc;
}