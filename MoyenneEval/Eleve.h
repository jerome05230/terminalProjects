#ifndef ELEVE_H
#define ELEVE_H
#include <iostream>
#include <string>
using namespace std;

 /**
  * class Eleve
  */

class Eleve {

private:

// Private attributes 

  string nom;
  string prenom;
  int age;

public:

// Constructors/Destructors

  /**
   * @brief constructor of Eleve
   */
  Eleve ( );
  /**
   * @brief constructor of Eleve
   * @param string leNom
   * @param string lePrenom
   * @param int lAge
   */
  Eleve (string leNom, string lePrenom, int lAge);
  /**
   * @brief constructor of Eleve
   * @param string laDate
   */
  Eleve (string leNom);

//method

  /**
   * @brief Saisir le nom de l'étudiant
   */
   void saisieNom ();
  /**
   * @brief Saisir le prenom de l'étudiant
   */
   void saisiePrenom ();
  /**
   * @brief Saisir l'age de l'étudiant
   */
   void saisieAge ();
  /**
   * @brief présentation de l'étudiant
   * l'élève donne son nom, son prenom, son age 
   */
   void sePresenter ();

//attribute accessor methods

  /**
   * @brief Set the value of nom
   * @param newNom the new value of nom
   */
  void setNom ( string newNom) ;  
  /**
   * @brief Get the value of nom
   * @return the value of nom
   */
  string getNom ( );   
  /**
   * @brief Set the value of prenom
   * @param newPrenom the new value of prenom
   */
  void setPrenom ( string newPrenom );  
  /**
   * @brief Get the value of prenom
   * @return the value of prenom
   */
  string getPrenom ( );
  /**
   * @brief Set the value of age 
   * @param newAge the new value of age
   */
  void setAge ( int newAge );   
  /**
   * @brief Get the value of age
   * @return the value of age
   */
  int getAge ( );   
};

#endif // ELEVE_H
