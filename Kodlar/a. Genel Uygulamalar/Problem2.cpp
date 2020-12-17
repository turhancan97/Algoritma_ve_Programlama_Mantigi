#include<iostream>
using namespace std;
int main()
{
	int sayi;
	cout << "Bir sayi giriniz : ";
	cin >> sayi;
	if(sayi % 2 == 0)
	{
		cout << "Girilen sayi bir cift sayidir";
	}
	else
	{
		cout << "Girilen sayi bir tek sayidir";
	}
}