#include <iostream>
#include "Professeur.h"

// Constructors/Destructors
//  

Professeur::Professeur ( ) {}

// Methods

  /**
   * Saisir le nom du professeur
   * @param nom the name of the eleve
   */
   void Professeur::saisieNom (){
	cout <<"tapez le nom de l'eleve: ";
	string nom;
	getline (cin,nom);
	cout <<"le nom que vous avez saisie est: " << nom << endl;
}
  /**
   * Saisir le prenom du professeur
   * @param prenom the name of the eleve
   */
   void Professeur::saisiePrenom (){
	cout <<"tapez le prenom de l'eleve: ";
	string prenom;
	getline (cin,prenom);
	cout <<"le prenom que vous avez saisie est: " << prenom << endl;
}
  /**
   * Saisir l'age du professeur
   * @param age the name of the eleve
   */
   void Professeur::saisieAge (){
	cout <<"tapez l'age de l'eleve: ";
	int age;
	cin>>prenom;
	cin.ignore(1);
	cout <<"l'age que vous avez saisie est: " << age << endl;
}
  /**
   * Saisir l'age du professeur
   * @param age the name of the eleve
   */
   void Professeur::saisieMatiere (){
	cout <<"tapez l'age de l'eleve: ";
	string matiere;
	getline (cin,matiere);
	cout <<"la matiere que vous avez saisie est: " << matiere << endl;
}

// Accessor methods

// Private attribute accessor methods
  //  
  /**
   * Set the value of matiere
   * @param new_var the new value of matiere
   */
  void Professeur::setMatiere ( string newMatiere )   {
      matiere = newMatiere;
  }

  /**
   * Get the value of matiere
   * @return the value of matiere
   */
  string Professeur::getMatiere ( )   {
    return matiere;
  }
  /**
   * Set the value of nom
   * @param new_var the new value of nom
   */
  void Professeur::setNom ( string newNom )   {
      nom = newNom;
  }
  /**
   * Get the value of nom
   * @return the value of nom
   */
  string Professeur::getNom ( )   {
    return nom;
  }
  /**
   * Set the value of prenom
   * @param new_var the new value of prenom
   */
  void Professeur::setPrenom ( string newPrenom )   {
      prenom = newPrenom;
  }
  /**
   * Get the value of prenom
   * @return the value of prenom
   */
  string Professeur::getPrenom ( )   {
    return prenom;
  }
  /**
   * Set the value of age
   * @param new_var the new value of age
   */
  void Professeur::setAge ( int newAge )   {
      age = newAge;
  }
  /**
   * Get the value of age
   * @return the value of age
   */
  int Professeur::getAge ( )   {
    return age;
  }
 

