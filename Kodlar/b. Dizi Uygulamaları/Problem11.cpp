#include<iostream>
#include <stdlib.h>
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;
int main()
{
	int n;
	cout << "Eleman sayisi (n) giriniz : ";
	cin >> n;
	int sayilar[n];
	for(int i=0 ; i<n ; i++)
	{
		sayilar[i] = rand() %99 + 1;
	}
	for(int i=0 ; i<n ; i++)
	{
		cout << "\t" << sayilar[i];
	}
}