
#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>
using namespace std;
/**
  * class Personne
  * 
  */

class Personne
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Personne ( );

  /**
   * Empty Destructor
   */
  virtual ~Personne ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @return string
   */
  string AfficherPersonne ( )
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  string nom;
  string prenom;
  int age;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of nom
   * @param new_var the new value of nom
   */
  void setNom ( string new_var )   {
      nom = new_var;
  }

  /**
   * Get the value of nom
   * @return the value of nom
   */
  string getNom ( )   {
    return nom;
  }

  /**
   * Set the value of prenom
   * @param new_var the new value of prenom
   */
  void setPrenom ( string new_var )   {
      prenom = new_var;
  }

  /**
   * Get the value of prenom
   * @return the value of prenom
   */
  string getPrenom ( )   {
    return prenom;
  }

  /**
   * Set the value of age
   * @param new_var the new value of age
   */
  void setAge ( int new_var )   {
      age = new_var;
  }

  /**
   * Get the value of age
   * @return the value of age
   */
  int getAge ( )   {
    return age;
  }
private:


  void initAttributes ( ) ;

};

#endif // PERSONNE_H
