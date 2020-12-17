int main()
{
	double k1,k2;
	cout << "Dikdortgenin uzunlugunu giriniz :";
	cin >> k1;
	cout << "Dikdortgenin genisligini giriniz :";
	cin >> k2;
	double cevre = 2*(k1+k2);
	double alan = k1 * k2;
	cout << "Cevre = " << cevre << endl << "Alan = " << alan;
}
