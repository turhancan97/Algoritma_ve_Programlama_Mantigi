#include<iostream>
#include<math.h>
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;
int main()
{
	int dizi[] = {1,2,3,4,5,6,7,8,9};
	int a,b;
	cout << "Birinci indis (a) giriniz : ";
	cin >> a;
	cout << "Ýkinci indis (b) giriniz : ";
	cin >> b;
	
	int temp = dizi[a];
	dizi[a] = dizi[b];
	dizi[b] = temp;
	
	for(int i=0; i<length(dizi); i++)
	{
		cout << "\t" << dizi[i];
	}
}