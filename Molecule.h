#pragma once

#ifndef MOLECULE
#define MOLECULE
#include "Atom.h"

#include <iostream>
using std::string;

class Molecule
{
private:
	Atom _atom1;
	//Atom _atom2;
	//Atom _atom3;
	float _sumAtomMass;
	string _sumElement;

public:
	Molecule() : _sumAtomMass{}, _sumElement{"NO ELEMENT"} {};

	Molecule(Atom atom1) : Molecule() {
		_atom1 = atom1;
	}
	
	Molecule(const Molecule& molecule) : _atom1(molecule._atom1), _sumAtomMass(molecule._sumAtomMass),
		_sumElement(molecule._sumElement) {}

	//Molecule(Atom atom1, Atom atom2) {
	//	_atom1 = atom1;
	//	_atom2 = atom2;
	//}
	//
	//Molecule(Atom atom1, Atom atom2, Atom atom3) {
	//	_atom1 = atom1;
	//	_atom2 = atom2;
	//	_atom3 = atom3;
	//}

#pragma region operators
	Molecule operator+ (const Molecule& molecule) {
		float sumAtomMass = _atom1.getAtomMass() + molecule._atom1.getAtomMass();
		string sumElement = _atom1.getAtomName() + molecule._atom1.getAtomName();

		return Molecule(_atom1, sumAtomMass, sumElement);
	}
}
;
#endif