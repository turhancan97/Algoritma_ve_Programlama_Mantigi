// �ki Sayi �zerinde Temel D�rt Matematiksel i�lem

#include<iostream> // giri� �ikis k�t�phanesi
using namespace std;
int main()
{
	int a,b;
	cout<< "�lk say� (a) giriniz : ";
	cin >> a;
	cout<< "ikinci say� (b) giriniz : ";
	cin >> b;
	
	int T = a+b;
	int F = a-b;
	int C = a*b;
	int B = a/b;
	
	cout << "Toplam = " << T << endl << "Fark = " << F << endl;
	cout << "carpim = " << C << endl << "Bolum = " << B << endl;
	
}
