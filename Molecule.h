#include "Atom.h"
#pragma once
#ifndef MOLECULE
#define MOLECULE

class Molecule
{
private:
	Atom _atom1;
	Atom _atom2;
	Atom _atom3;

public:
	Molecule(): _atom1{}, _atom2{}, _atom3{}
	{}

	Molecule(Atom atom1) {
		_atom1 = atom1;
	}
	
	Molecule(Atom atom1, Atom atom2) {
		_atom1 = atom1;
		_atom2 = atom2;
	}
	
	Molecule(Atom atom1, Atom atom2, Atom atom3) {
		_atom1 = atom1;
		_atom2 = atom2;
		_atom3 = atom3;
	}
}
;
#endif