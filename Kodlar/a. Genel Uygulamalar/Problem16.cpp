#include<iostream>
using namespace std;
int main()
{
	int taban,kuvvet,sonuc=1;
	cout << "Ussu alinacak sayiyi (taban) giriniz : ";
	cin >> taban;
	cout << "Us kuvvetini (kuvvet) giriniz : ";
	cin >> kuvvet;
	
	for(int i=1; i<=kuvvet; i++)
	{
		sonuc*=taban;
	}
	cout << sonuc;
}