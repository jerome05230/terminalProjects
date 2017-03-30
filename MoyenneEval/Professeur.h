
#ifndef PROFESSEUR_H
#define PROFESSEUR_H

#include <string>
using namespace std;
/**
  * class Professeur
  * 
  */

class Professeur
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Professeur ( );

  /**
   * @return string
   */
  string AfficherProfesseur ( )
  {
  }

private:

  // Static Private attributes
  //  

  // Private attributes
  //  
  string matiere;
  string nom;
  string prenom;
  int age;

public:

 //method

  /**
   * Saisir le nom du professeur
   * @param nomEleve the name of the eleve
   */
   void saisieNom ();
  /**
   * Saisir le prenom du professeur
   * @param prenomEleve the name of the eleve
   */
   void saisiePrenom ();
  /**
   * Saisir l'age du professeur
   * @param ageEleve the name of the eleve
   */
   void saisieAge ();
   /**
   * Saisir l'age du professeur
   * @param ageEleve the name of the eleve
   */
   void saisieMatiere ();


  // Private attribute accessor methods
 
  /**
   * Set the value of matiere
   * @param new_var the new value of matiere
   */
  void setMatiere ( string newMatiere );
  // Accessor methods
// 
  /**
   * Get the value of matiere
   * @return the value of matiere
   */
  string getMatiere ( );
  /**
   * Set the value of nom
   * @param new_var the new value of nom
   */
  void setNom ( string newNom );
  /**
   * Get the value of nom
   * @return the value of nom
   */
  string getNom ( );
  /**
   * Set the value of prenom
   * @param new_var the new value of prenom
   */
  void setPrenom ( string newPrenom );
  /**
   * Get the value of prenom
   * @return the value of prenom
   */
  string getPrenom ( );

  /**
   * Set the value of age
   * @param new_var the new value of age
   */
  void setAge ( int newAge );
  /**
   * Get the value of age
   * @return the value of age
   */
  int getAge ( );
};
#endif // PROFESSEUR_H
