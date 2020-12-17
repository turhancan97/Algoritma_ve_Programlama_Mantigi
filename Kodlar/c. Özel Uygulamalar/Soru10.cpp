#include<iostream>
#include<string.h>
using namespace std;
int basamakTopla(int sayi)
{
	int toplam=0;
	while(sayi!=0)
	{
		toplam+=sayi%10;
		sayi/=10;
	}
	return toplam;
}
int main()
{
	string no;
	cout << "Kredi kartý no giriniz : ";
	cin >> no;
	int tekler=0,ciftler=0;
	for(int i=0;i<16;i++)
	{
		if(i%2==0)
			ciftler += basamakTopla(2*((int)(no[i]-'0')));
		else
			tekler += ((int)(no[i]-'0'));
	}
	if((tekler+ciftler)%10==0)
		cout << "Dogru Kart Numarasi!";
	else
		cout << "Yanlis Kart Numarasi!";
}