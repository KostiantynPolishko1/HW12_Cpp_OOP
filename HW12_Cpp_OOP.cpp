#include "Molecule.h"

int main(void) {

	//Molecule Molecula;
	Molecule H(Atom(1));
	Molecule O(Atom(16));

	Molecule HO(H + O);

	//Molecule H20(Atom(1), Atom(8));
	//Molecule C5H10O4(Atom(6), Atom(1), Atom(8));

	return 0;
}
;