#include<iostream>
using namespace std;
#define PI 3.14
int main()
{
	double r;
	cout << "Kurenin yari capini (r) giriniz : ";
	cin >> r;
	double alan = 4 * PI * r * r;
	double hacim = (4/3) * PI * r * r * r;
	cout << "Alan = " << alan << endl << "Hacim = " << hacim;
}