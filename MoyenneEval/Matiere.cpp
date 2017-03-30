#include "Matiere.h"

// Constructors/Destructors 

   Matiere::Matiere ( ) {}
   Matiere::Matiere (string leNom, int leCoef ) {
	nom = leNom;
	coef = leCoef;
   }
   Matiere::Matiere (string leNom ) {
	nom=leNom;
   }

// Methods

//---------------------------------------------------------validé------------------------------------------------
   void Matiere::saisieNom (){
	cout << "tapez le nom de la matiere: ";
	string nom;
	getline (cin,nom);
	cout << "le nom que vous avez saisie est: " << nom << endl;
   }
//---------------------------------------------------------validé------------------------------------------------
   void Matiere::saisieCoef (){
	cout << "tapez le coef de la matiere:";
	float coef;
	cin >> coef;
	cin.ignore(1);
	cout << "le coef que vous avez saisie est: " << coef << endl;
   }
//---------------------------------------------------------validé------------------------------------------------
   void Matiere::presenterMatiere(){
	cout << "la matière est la suivante: " << this->getNom() << " le coef de cette dernière est: " << this->getCoef() << endl;
   } 

// Accessor methods
  
  void Matiere::setNom ( string newNom )   {
      nom = newNom;
  }
  string Matiere::getNom ( )   {
    return nom;
  }  
  void Matiere::setCoef ( int newCoef )   {
      coef = newCoef;
  }
  int Matiere::getCoef ( )   {
    return coef; 
  }
