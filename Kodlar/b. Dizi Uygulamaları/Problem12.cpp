#include<iostream>
#include <stdlib.h>
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;
int main()
{
	int s[] = {22,36,12,44,56,96,34,23,47,85,76,13,19,45,48,53};
	int cift=0,tek=0,asal=0;
	for(int i=0; i<length(s);i++)
	{
		int sayi=s[i];
		if(sayi%2==0)
			cift++;
		int bolen=0;
		for(int j=1;j<=sayi;j++)
		{
			if(sayi%j==0)
				bolen++;
		}
		if(bolen==2)
			asal++;
	}
	tek = length(s) - cift;
	cout << "Toplam Cift Sayi = " << cift << endl;
	cout << "Toplam Tek Sayi = " << tek << endl;
	cout << "Toplam Asal Sayi = " << asal << endl;
}