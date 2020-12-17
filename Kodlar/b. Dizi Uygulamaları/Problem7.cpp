#include<iostream>
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;
int main()
{
	int dizi[] = {1,2,3,4,5,6,7,8,9,10};
	int boyut = length(dizi);
	for(int i=0; i<boyut/2; i++)
	{
		int temp = dizi[i];
		dizi[i] = dizi[boyut-i-1];
		dizi[boyut-i-1] = temp;
	}
	for(int i=0; i<boyut; i++)
	{
		cout << " " << dizi[i];
	}
}