#include <iostream>
using namespace std;

void zerowanie(int liczba, int &ref);
int main(int argc, char** argv) {
	
	int a = 44, b = 77;
	
	cout << "Przed uzyciem funkcji liczby wygladaly tak: " << endl 
	<< "a = " << a << endl
	<< "b = " << b << endl;
	
	zerowanie(a, b);

	
	cout << "Po powrocie z funkcji 'zerowanie': " << endl
	<< "a: " << a << endl
	<< "b: " << b << endl << endl;
	
	cout << "Teraz podaj swoje liczby, ktore wyzerujemy!" << endl;
	
	int c, d;
	
	cout << "Podaj pierwsza liczbe: " << endl;
	cin >> c; 
	
	cout << "Podaj druga liczbe: " << endl;
	cin >> d; 
	
	zerowanie(c, d);
	
	cout << "Znow wracamy do programu. Twoje liczby teraz wygladaja tak: " << endl
	<< "1. liczba: " << c << endl
	<< "2. liczba: " << d << endl; 
	
	return 0;
}
void zerowanie(int liczba, int &ref)
{
	cout << "Wykorzystujemy funkcje 'zerowanie'. Podane liczby maja wartosc: " << endl
	<< "1: " << liczba << endl
	<< "2: " << ref << endl;
	
	liczba = 0;
	ref = 0;
	
	cout << "W funkcji liczby maja teraz wartosc: " << endl
	<< "1: " << liczba << endl
	<< "2: " << ref << endl; 
}

