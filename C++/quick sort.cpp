// quick sort

#include <string.h>
#include <iostream>
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;

void QuickSort(int[], int , int);
int Parcala (int[], int , int);

int main( )
{
	int dizi[] = {7,8,5,2,4,6,3};
	// ilk çalýþtýrma için bütün elemanlarý kapsayacak indisleri veriyoruz
	QuickSort(dizi, 0 , length(dizi)-1);
	
	for(int i = 0; i < length(dizi); i++)
	{
	int j =i;
	
	cout << dizi[i] << "\t";
	
	}
}
	void QuickSort(int[], int baslangic , int bitis)
{
	if (baslangic < bitis)
	{
		int q = Parcala (dizi, baslangic, bitis);
		QuickSort(dizi,baslangic,q-1);
		QuickSort(dizi,q+1, bitis);
	}
}	
	
	int Parcala (int dizi[], int baslangic, int bitis)
{
	int x = dizi[bitis];
	int i = baslangic -1;
	
	for (int j = baslangic ; j < bitis ; j++)
	{
		if (dizi[j] <= x)
		{
			i = i+1;
			int temp = dizi[i];
			dizi[i] = dizi[j];
			dizi[j] = temp;
		}
	}
			int temp2 = dizi[i+1];
			dizi[i+1] = dizi[bitis];
			dizi[bitis] = temp2;
			return i + 1;
}
