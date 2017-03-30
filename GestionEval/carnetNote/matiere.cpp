#include "matiere.h"
#include <iostream>
using namespace std;

Matiere::Matiere() { }

void Matiere::setNomMatiere ( string laMatiere)   {
	nomMatiere = laMatiere;
}
string Matiere::getNomMatiere ( )   {
	return nomMatiere;
}

void Matiere::affiche()
{
	cout << "nom: " << nomMatiere << " coeff: " << coeff << endl;

}

void Matiere::setCoeff( int leCoeff)   {
	coeff = leCoeff;
}

int Matiere::getCoeff ( )   {
	return coeff;
}

