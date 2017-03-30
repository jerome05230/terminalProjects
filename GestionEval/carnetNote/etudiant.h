
#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>
#include <vector>
using namespace std;

class Etudiant
{
private:
  string nom;
  string prenom;
public:
  Etudiant();  
  void affiche();
  void fromKeyboard();

  /**
   * Set the value of nom
   * @param new_var the new value of nom
   */
  void setNom ( string leNom );

  /**
   * Get the value of nom
   * @return the value of nom
   */
  string getNom ( );  

  /**
   * Set the value of prénom
   * @param new_var the new value of prénom
   */
  void setPrenom ( string lePrenom ); 

  /**
   * Get the value of prénom
   * @return the value of prénom
   */
  string getPrenom ( );

};

#endif // ETUDIANT_H
