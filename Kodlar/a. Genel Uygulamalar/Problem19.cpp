#include<iostream>
using namespace std;
int main()
{
	int sayi;
	cout << "Tersten yazdirilacak sayiyi giriniz : ";
	cin >> sayi;
	
	while(sayi!=0)
	{
		cout << sayi%10;
		sayi/=10;
	}
}