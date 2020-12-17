#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	for(int n=0 ; n<= 4 ; n++)
	{
		long fermat = pow(2,pow(2,n)) + 1;
		cout << "n=" << n <<"\t" << fermat << endl;
	}
}