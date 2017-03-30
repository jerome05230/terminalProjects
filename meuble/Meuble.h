#ifndef MEUBLE_H
#define MEUBLE_H
#include <string>
using namespace std;
/**
  * class Meuble
  */

class Meuble
{
public:

  // Constructors/Destructors


  Meuble ( );
  ~Meuble ( );
  Meuble (string leNom, int lePrix, int leStock);
  Meuble (string leNom);
private:

  // Private attributes 

  string nom;
  int prix;
  int stock;

public:
static int nbMeubles;
  //method

  /**
   * Saisir le nom du meuble
   */
   void saisieNom ();
  /**
   * Saisir le prenom du meuble
   */
   void saisiePrix ();
  /**
   * Saisir l'age du meuble
   */
   void saisieStock ();
  /**
   * présentation du meuble
   */
   void sePresenter ();

  //attribute accessor methods

  /**
   * Set the value of nom
   * @param new_var the new value of nom
   */
  void setNom ( string newNom) ;  
  /**
   * Get the value of nom
   * @return the value of nom
   */
  string getNom ( );   
  /**
   * Set the value of prenom
   * @param new_var the new value of prenom
   */
  void setPrix ( int newPrix );  
  /**
   * Get the value of prenom
   * @return the value of prenom
   */
  int getPrix ( );
  /**
   * Set the value of age
   * @param new_var the new value of age
   */
  void setStock ( int newStock );   
  /**
   * Get the value of age
   * @return the value of age
   */
  int getStock ( );   
};

#endif // ELEVE_H
