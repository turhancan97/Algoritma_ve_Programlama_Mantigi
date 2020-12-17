#include<iostream>
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;
int main()
{
	int dizi[] = {1,2,3,4,5,6,7,8,9,10};
	int ara,yer=-1;
	cout << "Aramak istediginiz sayiyi giriniz : ";
	cin >> ara;
	for(int i=0; i<length(dizi); i++)
	{
		if(dizi[i]==ara)
		{
			yer=i;
			break;
		}
	}
	if(yer!=-1)
		cout << "Aranilan eleman bulundu. Indis Numarasi : " << yer;
	else
		cout << "Aranilan eleman bulunamadi";
}