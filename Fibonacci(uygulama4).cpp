// Fibonacci Sayý Serisi

#include <iostream>
using namespace std;

int main( )
{
	int n,T1=1,T2=1,T3;
	cout << "Terim sayisini giriniz : ";
	cin >> n;
	cout << "\t" << T1 << "\t" << T2;
	for(int i=1; i<= n-2; i++)
	{
		T3=T1+T2;
		cout<<"\t"<<T3;
		T1=T2;
		T2=T3;
		
	}
}
