#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "�lk sayi (a) giriniz : ";
	cin >> a;
	cout << "�kinci sayi (b) giriniz : ";
	cin >> b;
	int T = a+b;
	int F = a-b;
	int C = a*b;
	int B = a/b;
	
	cout << "Toplam = " << T << endl << "Fark = " << F << endl;
	cout << "Carpim = " << C << endl << "Bolum = " << B << endl;
}