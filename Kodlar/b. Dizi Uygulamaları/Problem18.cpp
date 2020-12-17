#include<iostream>
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;
int main()
{
	int N,T=0;
	cout << "Kare Matris (NxN) için boyut giriniz : ";
	cin >> N;
	int matris[N][N];
	for(int i=0 ; i<N; i++)
		for(int j=0; j<N; j++)
			if(i==j)
				matris[i][j]=1;
			else
				matris[i][j]=0;	
	for(int i=0 ; i<N ; i++)
	{
		for(int j=0 ; j<N ; j++)
		{
			cout << "\t" << matris[i][j];
		}
		cout << "\n\n";
	}
}