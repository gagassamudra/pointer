#include <iostream>
using namespace std;

int main ()
{
	int i, j, tot;
	int batas = 10 ;
	int *gagas = &tot;
	int *samudra = &j ;
		
	cout << "Masukkan angka yang akan dikalikan = " ;
	cin >> j ;
	
	for (i=1; i<=batas; i++)	{
		tot = i*j ;
		cout << i << " x " << *samudra << " = " << *gagas << endl;
	}
	
	return 0;
}
