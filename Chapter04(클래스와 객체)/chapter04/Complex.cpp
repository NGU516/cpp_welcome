#include "chapter04.h"

void Complex::print(){
	// +
	if (plus)
		cout << r << " + " << i << 'i' << endl;
	// -
	else
		cout << r << " - " << i << 'i' << endl;
}