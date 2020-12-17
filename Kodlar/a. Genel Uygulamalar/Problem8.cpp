#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double x,h;
	cout << "Ucgenin taban uzunlugunu (x) giriniz : ";
	cin >> x;
	cout << "Ucgenin yuksekligini (h) giriniz : ";
	cin >> h;
	
	double alan = x*h / 2;
	cout << "Alan = " << alan;
}