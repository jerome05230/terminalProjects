#include <iostream>
#include "Meuble.h"

// Constructors/Destructors
//  

Meuble::Meuble ( ) {
	Meuble::nbMeubles+=1;
}
Meuble::~Meuble(){
	cout << "destruction" <<endl;
	Meuble::nbMeubles-=1;
}
Meuble::Meuble (string leNom, int lePrix, int leStock) {
	nom = leNom;
	prix = lePrix;
	stock = leStock;
	Meuble::nbMeubles+=1;
}
Meuble::Meuble (string leNom) {
	nom = leNom;
	Meuble::nbMeubles+=1;
}

// Methods
int Meuble::nbMeubles=0;
  /**
   * Saisir le nom du meuble
   */
   void Meuble::saisieNom (){
	cout << "tapez le nom du meuble: ";
	getline (cin,nom);
	cout << "le nom que vous avez saisie est: " << nom << endl;
}
  /**
   * Saisir le prenom du meuble
   */
   void Meuble::saisiePrix (){
	cout << "tapez le prix du meuble: ";
	cin>>prix;
	cin.ignore(1);
	cout << "le prix que vous avez saisie est: " << prix << endl;
}
  /**
   * Saisir l'age du meuble
   */
   void Meuble::saisieStock (){
	cout << "tapez le stock du meuble: ";
	cin>>stock;
	cin.ignore(1);
	cout << "le stock que vous avez saisie est: " << stock << endl;
}
  /**
   * présentation du meuble
   */
   void Meuble::sePresenter(){
	cout << "le nom du meuble est: " << this->getNom() << " son prix est de:  " << this->getPrix() << "euros et il y en as: " << this->getStock() << " en stock" << endl;
} 
// Accessor methods
  
  /**
   * Set the value of nom
   * @param newNom the new value of nom
   */
  void Meuble::setNom ( string newNom )   {
      nom = newNom;
  }
  /**
   * Get the value of nom
   * @return the value of nom
   */
  string Meuble::getNom ( )   {
    return nom;
  }
  /**
   * Set the value of prenom
   * @param newPrix the new value of prix
   */
  void Meuble::setPrix ( int newPrix )   {
      prix = newPrix;
  }
  /**
   * Get the value of prix
   * @return the value of prenom
   */
  int Meuble::getPrix ( )   {
    return prix;
  }
  /**
   * Set the value of stock
   * @param newAge the new value of stock
   */
  void Meuble::setStock ( int newStock )   {
      stock = newStock;
  }
  /**
   * Get the value of stock
   * @return the value of stock
   */
  int Meuble::getStock ( )   {
    return stock;
  } 
