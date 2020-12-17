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
	{
		for(int j=0; j<N; j++)
		{
			cout << i+1 << ".satir - " << j+1 << ".sutun : ";
			cin >> matris[i][j];
		}
		cout << "\n";
	}
	cout << "\t---Matrisin Normal Hali---\n\n";
	for(int i=0 ; i<N ; i++)
	{
		for(int j=0 ; j<N ; j++)
		{
			cout << "\t" << matris[i][j];
		}
		cout << "\n\n";
	}
	cout << "\n\n\t---Matrisin Transpozu Alinmis Hali---\n\n";
	for(int i=0 ; i<N ; i++)
	{
		for(int j=0 ; j<N ; j++)
		{
			cout << "\t" << matris[j][i];
		}
		cout << "\n\n";
	}
}