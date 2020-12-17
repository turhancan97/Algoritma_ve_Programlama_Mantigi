#include<iostream>
using namespace std;
int main()
{
	int sayi, toplam=0;
	cout << "Bir sayi giriniz : ";
	cin >> sayi;
	while(sayi!=0)
	{
		toplam+=sayi%10;
		sayi/=10;
	}
	cout << toplam;
}