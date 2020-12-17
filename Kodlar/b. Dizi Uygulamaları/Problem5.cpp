#include<iostream>
#include<math.h>
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;
int main()
{
	int A[] = {12,18,22,10,23,28,38,56,44,74};
	int B[] = {38,11,14,26,16,39,43,32,20,13};
	int C[length(A)];
	for(int i=0; i<length(A); i++)
	{
		C[i] = A[i] + B[i];
	}
	cout << "\tA + B = C\n";
	for(int i=0; i<length(A); i++)
	{
		cout << "\t" << A[i] << " + " << B[i] << " = " << C[i] << endl;
	}
}