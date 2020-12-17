#include<iostream>
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;
int main()
{
	int N;
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
}