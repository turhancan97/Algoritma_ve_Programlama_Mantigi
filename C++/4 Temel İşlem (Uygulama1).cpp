// Ýki Sayi Üzerinde Temel Dört Matematiksel iþlem

#include<iostream> // giriþ çikis kütüphanesi
using namespace std;
int main()
{
	int a,b;
	cout<< "Ýlk sayý (a) giriniz : ";
	cin >> a;
	cout<< "ikinci sayý (b) giriniz : ";
	cin >> b;
	
	int T = a+b;
	int F = a-b;
	int C = a*b;
	int B = a/b;
	
	cout << "Toplam = " << T << endl << "Fark = " << F << endl;
	cout << "carpim = " << C << endl << "Bolum = " << B << endl;
	
}
