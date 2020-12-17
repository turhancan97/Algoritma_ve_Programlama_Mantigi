#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double k1,k2;
	cout << "Ucgenin 1. dik kenar uzunlugunu giriniz : ";
	cin >> k1;
	cout << "Ucgenin 2. dik kenar uzunlugunu giriniz : ";
	cin >> k2;
	
	double hipotenus = sqrt(k1*k1 + k2*k2);
	cout << "Hipotenuz = " << hipotenus;
}