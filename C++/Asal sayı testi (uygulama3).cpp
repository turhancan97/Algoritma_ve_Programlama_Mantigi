// Girilen sayýnýn asal olup olmadýðýný kontrol etme

#include <iostream>
using namespace std;

int main( )
{
	int sayi,t=0; 
	cout << "Bir sayi giriniz : ";
	cin >> sayi;

	for (int i= 1 ; i<=sayi; i++)
	{
		if(sayi%i==0)
		{
			t++;
		}
	}
	if(t==2)
	{
		cout<<sayi<<" bir asal sayidir";
	}
	else
	{
		cout<<sayi<<" bir asal sayi degildir";
	}

}
