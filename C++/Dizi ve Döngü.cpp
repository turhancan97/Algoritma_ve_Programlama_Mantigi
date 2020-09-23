// dizi ve döngü 

#include<iostream> // giriþ çikis kütüphanesi
using namespace std;
int main()
{
	int sayilar[5];
	double ortalama = 0.0;
	
	for(int i = 0; i<5; i++)
	
	{
		cout << i+1 <<".sayiyi giriniz : " ;
		cin >> sayilar[i];
		
	}
	
		for(int i = 0; i<5; i++)
	
	{
		ortalama += sayilar[i];
		
	}
		ortalama /= 5.0;
		cout << "Ortalama : " << ortalama << endl;
}
