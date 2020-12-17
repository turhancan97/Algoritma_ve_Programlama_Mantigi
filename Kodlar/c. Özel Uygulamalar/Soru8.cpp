#include<iostream>
#include <stdlib.h> 
#include <time.h>
using namespace std;
int main()
{
	int i = 0,j = 0;
	int loto[6];
	while(i<6)
	{
		srand(time(NULL));
		int n = rand() % 50 + 1;
		for(j=0;j<6;j++)
		{
			if(loto[j]==n)
				break;
		}
		if(j==6)
		{
			loto[i] = n;
			i++;
		}
	}
	for(i=0;i<6;i++)
		cout << "\t" << loto[i];
}