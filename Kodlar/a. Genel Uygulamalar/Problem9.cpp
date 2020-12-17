#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.14
int main()
{
	double a,b,aci;
	cout << "Birinci kenar uzunlugunu (a) giriniz : ";
	cin >> a;
	cout << "Ikinci kenar uzunlugunu (b) giriniz : ";
	cin >> b;
	cout << "Kenarlar arasindaki aciyi (alfa-aci) giriniz : ";
	cin >> aci;
	
	double alan = a*b*sin(aci*PI/180)/2;
	cout << "Alan = " << alan;
}
