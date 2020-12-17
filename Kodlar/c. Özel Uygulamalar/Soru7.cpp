#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	cout << "Kelime Giriniz : ";
	cin >> s;
	bool durum=true;
	for(int i=0;i<s.size()/2;i++)
	{
		if(s[i] != s[s.size()-i-1])
			durum=false;
	}
	if(durum==true)
		cout << "Palindrome bir kelime girdiniz";
	else
		cout << "Palindrome olmayan bir kelime girdiniz";
}