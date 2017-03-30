#include "etudiant.h"
#include <iostream>

// Constructors/Destructors
//  

Etudiant::Etudiant() { }

string Etudiant::getNom(){return nom;}

string Etudiant::getPrenom(){return prenom;}

void Etudiant::setNom( string leNom)
{
	nom=leNom;
}

void Etudiant::setPrenom( string lePrenom) 
{
	prenom=lePrenom;
}
void Etudiant::affiche()
{
	cout << "Nom: " << nom << "\tPrenom: " << prenom << endl;
}
void Etudiant::fromKeyboard()
{
	cout << "Saisie d'un nouvel Etudiant" << endl;
	cout << "Nom: ";
	getline(cin,nom);
	cout << "Prenom: ";
	getline(cin,prenom);
}

