#include<iostream>
using namespace std;
int main()
{
	double u;
	cout << "Karenin bir kenar uzunlugunu giriniz: ";
	cin >> u;
	double cevre = u * 4;
	double alan = u * u;
	cout << "Cevre = " << cevre << endl << "Alan = " << alan;
}