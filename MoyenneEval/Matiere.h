#ifndef MATIERE_H
#define MATIERE_H
#include <iostream>
#include <string>
using namespace std;

 /**
  * class Matiere
  */

class Matiere {

private:

  string nom;
  float coef;

public:
  
// Constructors/Destructors  

  /**
   * @brief constructor of Evaluation
   */
  Matiere ( );
  /**
   * @brief constructor of Matiere
   * @param string leNom
   * @param int leCoef
   */
  Matiere (string leNom, int leCoef );
  /**
   * @brief constructor of Evaluation
   * @param string leNom
   */
  Matiere (string leNom );

// Other methods 

  /**
   * Saisir le nom de la matiere
   */
   void saisieNom ();
  /**
   * Saisir le prenom de l'étudiant
   */
   void saisieCoef ();
  /**
   * présentation de la matiere
   */
   void presenterMatiere();

//Accessor

  /**
   * Set the value of nom
   * @param new_var the new value of nom
   */
  void setNom ( string newNom )   ;
  /**
   * Get the value of nom
   * @param new_var the new value of nom
   */
  string getNom ( );
  /**
   * Set the value of coef
   * @param new_var the new value of coef
   */
  void setCoef ( int newCoef );
  /**
   * Get the value of coef
   * @return the value of coef
   */
  int getCoef ( );

};
#endif // MATIERE_H
 
