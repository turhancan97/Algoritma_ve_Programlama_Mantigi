#include<iostream>
using namespace std;
int fib(int n)
{
	if(n == 2 || n==1) 
		return 1;
	else
		return fib(n-1) + fib(n-2);
}
int main()
{
	int n;
	cout << "Sira sayisini (n) giriniz : ";
	cin >> n;
	int sonuc = fib(n);
	cout << "Sonuc = " << sonuc;
}