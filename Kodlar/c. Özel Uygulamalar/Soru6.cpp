#include<iostream>
#include <stdlib.h> 
#include <time.h>
using namespace std;
int main()
{
	int hak=5,n, sayi=0;
	srand(time(NULL));
	n=rand() % 20 + 1;
	do{
		cout << endl << hak << " hak kaldi. Sayi Gir : ";
		cin >> sayi;
		if(n>sayi)
		{
			cout << "Sayiyi yukselt!";
			hak--;
		}	
		else if(n<sayi)
		{
			cout << "Sayiyi kucult!";
			hak--;
		}
		else
		{
			cout << "\nTebrikler. " << 5-hak+1 << " tahminde buldunuz!";
			break;
		}	
		if(hak<=0)
			cout << "\nKaybettin!\n";
	}while(hak>0);
}