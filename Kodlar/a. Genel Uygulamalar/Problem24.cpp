#include<iostream>
using namespace std;
double Seri(double n)
{
	if(n<1) 
		return 0;
	else
		return (n / (n+1)) + Seri(n-1);
}
int main()
{
	double n,sonuc;
	cout << "Seri acilimi icin sayi (n) giriniz : ";
	cin >> n;
	sonuc = Seri(n);
	cout << "Sonuc = " << sonuc;
}