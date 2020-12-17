#include<iostream>
#include<string.h>
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;
int main()
{
	string kelime;
	cout << "Kelime giriniz : ";
	cin >> kelime;
	int s[26] = {0};
	for(int i=0; i<kelime.size(); i++)
	{
		s[((int)kelime[i])-97]++;
	}
	for(int i=0;i<length(s);i++)
	{
		if(s[i]!=0)
			cout << "\n" << ((char)(i+97)) << "\t" << s[i];
	}
}