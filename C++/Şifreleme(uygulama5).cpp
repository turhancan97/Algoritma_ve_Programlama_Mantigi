#include <iostream>
#include <string.h>
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;

int main( )
{
	
	string kelime;
	cout << "Kelime Giriniz : ";
	cin >> kelime ;
	
	for (int i=0; i< kelime.size(); i++)
	
	{
		kelime[i] = (char) ((int)kelime[i]+15);
	}	
	cout<< endl << "Sifreli kelime : " << kelime;
	
}

