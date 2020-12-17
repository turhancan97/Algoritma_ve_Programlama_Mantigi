#include<iostream>
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;
int main()
{
	int N;
	cout << "Eleman sayisi (N) giriniz : ";
	cin >> N;
	int d[N];
	for(int i=0 ; i<N ; i++)
	{
		cout << i+1 << ". eleman : ";
		cin >> d[i];
	}
	
	for(int i=0 ; i<N-1 ; i++)
	{
		for(int j=i+1 ; j<N ; j++)
		{
			if(d[j]<d[i])
			{
				int temp = d[j];
				d[j] = d[i];
				d[i] = temp;
			}
		}
	}
	cout << "\n\n---Siralanmis Dizi---\n\n";
	for(int i=0 ; i<N ; i++)
	{
		cout << "\t" << d[i];
	}
}