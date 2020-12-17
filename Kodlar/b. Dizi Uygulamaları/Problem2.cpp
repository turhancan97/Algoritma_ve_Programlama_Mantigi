#include<iostream>
#include<math.h>
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;
int main()
{
	int Dizi[] = {8,10,56,12,3,5,1,8,74,6,11,89,102,25,36};
	for(int i=0; i<length(Dizi); i++)
	{
		cout << (i+1) << ". elemanin degeri : " << Dizi[i] << endl;
	}
}
