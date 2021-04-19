#include <iostream>
#include <cstdio>
#include "AbcCislo.h"

using namespace std;


int main() {

	AbcCislo a("BAA"), b(-2),c, d, e, f, g,h;
	c = a + b;
	d = a - b;
	e = a*b;
	f = a / b;
	g = a > b;
	
	cout << "Cisla: AHG , -2 \n";
	cout << "Scitanie: \n";
	c.vypisVAbc();
	c.vypisVDec();

	
	cout << "\nOdcitanie: \n";
	d.vypisVAbc();
	d.vypisVDec();
	
	cout << "\nNasobenie: \n";
	e.vypisVAbc();
	e.vypisVDec();

	cout << "\nDelenie: \n";
	f.vypisVAbc();
	f.vypisVDec();
	
	cout << "\nPorovnanie: 0 = False, 1= True \n";
	g.vypisVDec();


//	cout <<  "Ahoj Svet";

	return 0;
}