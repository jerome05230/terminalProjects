#include "Eleve.h"

// Constructors/Destructors

Eleve::Eleve ( ) {}
Eleve::Eleve (string leNom, string lePrenom, int lAge) {
	nom = leNom;
	prenom = lePrenom;
	age = lAge;
}
Eleve::Eleve (string leNom) {
	nom = leNom;
}

// Methods

//---------------------------------------------------------validé------------------------------------------------
   void Eleve::saisieNom (){
	cout << "tapez le nom de l'eleve: ";
	getline (cin,nom);
	cout << "le nom que vous avez saisie est: " << nom << endl;
}
//---------------------------------------------------------validé------------------------------------------------
   void Eleve::saisiePrenom (){
	cout << "tapez le prenom de l'eleve: ";
	getline (cin,prenom);
	cout << "le prenom que vous avez saisie est: " << prenom << endl;
}
//---------------------------------------------------------validé------------------------------------------------
   void Eleve::saisieAge (){
	cout << "tapez l'age de l'eleve: ";
	cin>>age;
	cin.ignore(1);
	cout << "l'age que vous avez saisie est: " << age << endl;
}
//---------------------------------------------------------validé------------------------------------------------
   void Eleve::sePresenter(){
	cout << "bonjour, je m'appelle " << this->getNom() << " " << this->getPrenom() << " j'ai " << this->getAge() << "ans" << endl;
}

// Accessor methods
  
  void Eleve::setNom ( string newNom )   {
      nom = newNom;
  }
  string Eleve::getNom ( )   {
    return nom;
  }
  void Eleve::setPrenom ( string newPrenom )   {
      prenom = newPrenom;
  }
  string Eleve::getPrenom ( )   {
    return prenom;
  }
  void Eleve::setAge ( int newAge )   {
      age = newAge;
  }
  int Eleve::getAge ( )   {
    return age;
  } 
