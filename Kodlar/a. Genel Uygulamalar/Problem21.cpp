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
	int n,r;
	cout << "Eleman Sayisi (n) giriniz : ";
	cin >> n;
	cout << "Secim sayisi (r) giriniz : ";
	cin >> r;
	int sonuc = Faktoriyel(n) / Faktoriyel(n-r);
	cout << "Permutasyon = " << sonuc;
}