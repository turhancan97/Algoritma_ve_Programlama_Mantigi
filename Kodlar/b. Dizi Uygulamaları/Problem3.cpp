#include<iostream>
#include<math.h>
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;
int main()
{
	int Dizi[] = {2,5,12,17,8,9,1,33};
	int T=0;
	for(int i=0; i<length(Dizi); i++)
	{
		T+=Dizi[i];
		cout << Dizi[i] << "+";
	}
	cout << " = " << T;
}