// Bir Dizinin En Büyük ve En Küçük Elemanlarýný Bulma

#include <iostream>
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;

int main( )
{
	int dizi[] = {10,2,3,6,21,99,0,8,9,33};
	int kucuk = dizi[0], buyuk = dizi[0];
	
	for (int i=0; i<length(dizi); i++)
	{
		if(dizi[i]< kucuk)
		kucuk=dizi[i];
		if(dizi[i]> buyuk)
		buyuk=dizi[i];
		
	}
	cout << "En kucuk deger : " << kucuk << endl;
	cout << "En buyuk deger : " << buyuk << endl;
}
