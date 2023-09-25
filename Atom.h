#include "DataBase.h"
#pragma once

#ifndef ATOM_H
#define ATOM_H

class Atom
{
private:
	string _atomSymbol;
	string _atomName;
	short _atomNumber;
	short _atomNProton;
	short _atomNNeitron;
	short _atomNElectron;
	short _atomEnergyLevel;
	float _atomMass;
	short *_arrElectron;

	short initEnergyLevel(short atomNumber);
	short* initElectronLevel(short* _arrElectron, short _atomNumber, short _atomEnergyLevel);


public:
	Atom() : _atomSymbol{}, _atomName{}, _atomNumber{}, _atomEnergyLevel{}, _atomMass{0.0f},
		_arrElectron{ nullptr }, _atomNProton{}, _atomNNeitron{}, _atomNElectron{}
	{ }

	Atom(short atomNumber)
	{

		if (atomNumber >= MIN && atomNumber <= MAX) {
			_atomNumber = atomNumber;
			_atomNProton = atomNumber;
			_atomNElectron = atomNumber;
			_atomEnergyLevel = initEnergyLevel(atomNumber);

			atomNumber--;
			_atomSymbol = arrAtomName[atomNumber][0];
			_atomName = arrAtomName[atomNumber][1];
			_atomMass = arrAtomMass[atomNumber];
			_atomNNeitron = (short)(_atomMass)-_atomNumber;
			_arrElectron = initElectronLevel(_arrElectron, _atomNumber, _atomEnergyLevel);
		}
		else
			Atom();
	}

	~Atom() {
		delete[] _arrElectron;
		_arrElectron = nullptr;
	}

	string getAtomSymbol();
	string getAtomName();
	short getAtomNumber();
	short getAtomNProton();
	short getAtomNNeitron();
	short getAtomNElectron();
	short getAtomEnergyLevel();
	float getAtomMass();
	short* getArrElectron();

	void setAtomNNeitron(short atomNNeitron);
}
;
#endif