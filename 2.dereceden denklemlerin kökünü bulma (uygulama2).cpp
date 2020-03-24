// 2.DERECEDEN BÝR DENKLEMÝN KÖKLERÝNÝ HESAPLAMA

#include <iostream>
#include<math.h>
using namespace std;

int main( )
{
	double a,b,c;
	cout << "A kaysayisini giriniz : ";
	cin >> a;
	cout << "B kaysayisini giriniz : ";
	cin >> b;
	cout << "C kaysayisini giriniz : ";
	cin >> c;
	double D = (b*b)-4*a*c;
	
	if (D>0)
	{
		double x1 = (-b + sqrt(D)/2*a);
		double x2 = (-b - sqrt(D)/2*a);
		cout << "Kok 1 (x1) = " << x1 << endl;
		cout << "Kok 2 (x2) = " << x2 << endl;
	}
	else if (D==0)
	{
		double x1 = (-b + sqrt(D)/2*a);
		cout << "Kok 1 (x1) = " << x1 << endl;
	}
	
	else if (D<0)
	
	{
		cout << "Reel kok yoktur !! ";
	}
}
