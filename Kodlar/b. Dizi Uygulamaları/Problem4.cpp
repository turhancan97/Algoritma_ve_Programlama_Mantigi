#include<iostream>
#include<math.h>
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;
int main()
{
	double A[] = {1900,2200,2360,2400,3600,3950,4450,4750,4900,6000};
	double B[length(A)];
	double k;
	cout << "Maas zammi icin katsayi (k) giriniz : ";
	cin >> k;
	for(int i=0; i<length(A); i++)
	{
		B[i] = A[i] * k;
	}
	cout << "\tEski\tYeni\tZam\n\n";
	for(int i=0; i<length(A); i++)
	{
		cout << "\t" << A[i] << "TL\t" << B[i] << "TL\t(" << (B[i]-A[i]) << "TL)\n";
	}
}