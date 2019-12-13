#include <iostream>	
using namespace std;

int main () 
{
	system ("title Gusti Gagas Samudra") ;
	
	double harian, praktek, uts, uas, total;
	double *a = &harian;
	double *b = &praktek;
	double *c = &uts;
	double *d = &uas; 
	double *e = &total;
		
	cout << "Masukkan nilai Harian  : ";
	cin >> harian ;
	cout << "Masukkan nilai Praktek : ";
	cin >> praktek ;
	cout << "Masukkan nilai UTS	    : ";
	cin >> uts ;
	cout << "Masukkan nilai UAS     : ";
	cin >> uas ;
    cout <<"===============================" << endl ;	
	total = (harian+praktek+uts+uas)/4 ;
	if (80 <= total&&total <= 100) {
		cout << "Nilai Harian  = " << *a << endl;
		cout << "Nilai Praktek = " << *b << endl;
		cout <<	"Nilai UTS     = " << *c << endl;
		cout <<	"Nilai UAS     = " << *d << endl;
		cout << "Skor total    = " << *e << endl;
		cout << "Nilai anda A" << endl;
	}
	
	else if (60 <= total&&total <= 79) {
		cout << "Nilai Harian  = " << *a << endl;
		cout << "Nilai Praktek = " << *b << endl;
		cout <<	"Nilai UTS     = " << *c << endl;
		cout <<	"Nilai UAS     = " << *d << endl;
		cout << "Skor total    = " << *e << endl;
		cout << "Nilai anda B" << endl;
	}
	
	else if (40 <= total&&total <= 59) {
		cout << "Nilai Harian  = " << *a << endl;
		cout << "Nilai Praktek = " << *b << endl;
		cout <<	"Nilai UTS     = " << *c << endl;
		cout <<	"Nilai UAS     = " << *d << endl;
		cout << "Skor total    = " << *e << endl;
		cout << "Nilai anda C" << endl;
	}
	
	else if (total&&total <= 39) {
		cout << "Nilai Harian  = " << *a << endl;
		cout << "Nilai Praktek = " << *b << endl;
		cout <<	"Nilai UTS     = " << *c << endl;
		cout <<	"Nilai UAS     = " << *d << endl;
		cout << "Skor total    = " << *e << endl;
		cout << "Nilai anda D" << endl;
	}
	system ("pause") ;
	system ("cls") ;
	return 0 ;
}
