#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b;
	do
	{
		cout << "Mod'u alinacak sayiyi (a) giriniz : ";
		cin >> a;
		cout << "Hangi Mod'un alinacagini (b) giriniz : ";
		cin >> b;
		cout << a << " mod " << b << " = " << a%b << endl << endl;
	}while(a!=0);
	cout << "0 sayisi girildi ve cikildi";
}
