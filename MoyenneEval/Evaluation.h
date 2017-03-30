#ifndef EVALUATION_H
#define EVALUATION_H
#include <iostream>
#include <string>
#include <vector>
#include "Note.h"
#include "Matiere.h"
using namespace std;

 /**
  * class Evaluation
  */

class Evaluation {

private:

// Private attributes

  int id;
  int semestre;
  string date;
  int coef;
  vector<Note> vectNotes;
  Matiere* laMatiere;

public:

// Static attributes

  static vector<Matiere*>*pVectMatieresSection;
  static vector<Eleve>*pVectElevesEvaluation;
  static vector<Evaluation>*pVectEvaluation;

// Constructors/Destructors 

  /**
   * @brief constructor of Evaluation
   */
  Evaluation ( );
  /**
   * @brief constructor of Evaluation
   * @param int lId
   * @param int leSemestre
   * @param string laDate
   * @param int leCoef
   * @param vector<Note> leVectNotes
   * @param Matiere* laNewMatiere
   */
  Evaluation (int lId, int leSemestre, string laDate, int leCoef, vector<Note> leVectNotes, Matiere* laNewMatiere); 
   /**
   * @brief constructor of Evaluation
   * @param int lId
   * @param int leSemestre
   * @param string laDate
   * @param int leCoef
   */
 Evaluation (int lId, int leSemestre, string laDate, int leCoef);
  
//methods
 
  /**
   * @brief Saisir l'id de l'évaluation
   */
   void saisieId ();
  /**
   * @brief Saisir le semestre du semestre
   */
   void saisieSemestre ();
  /**
   * @brief Saisir la date de l'évaluation
   */
   void saisieDate ();
  /**
   * @brief Saisir le coef de l'évaluation
   */
   void saisieCoef ();
  /**
   * @brief Saisir la matière de l'évaluation
   */
   void saisieMatiere ();
  /**
   * @brief affichage des élèves et appelle la saisie de leur note
   */
   void saisieNotesEvaluation ();
  /**
   * @brief affichage des élèves et de leurs notes
   */
   void afficherNotes();
  /**
   * @brief calcule et affiche la moyenne
   * calcule la valeur de la moyenne d'un élève
   */
   void moyenne();

// Private attribute accessor methods

  /**
   * @brief Set the value of id
   * @param newEvaluation the new value of id
   */
  void setId ( int newID ); 
  /**
   * @brief Get the value of id
   * @return the value of id
   */
  int getId ( );  
  /**
   * @brief Set the value of semestre
   * @param newSemestre the new value of semestre
   */
  void setSemestre ( int newSemestre );
  /**
   * @brief Get the value of semestre
   * @return the value of semestre
   */
  int getSemestre ( );
  /**
   * @brief Set the value of date
   * @return the value of date
   */
  void setDate ( string newDate );
 /**
  * @brief Set the value of date
  * @return the value of semestre
  */
  string getDate ( );
  /**
   * @brief Set the value of coef
   * @param newCoef the new value of coef
   */
  void setCoef ( int newCoef );
  /**
   * @brief Get the value of coef
   * @return the value of coef
   */
  int getCoef ( );
  /**
   * @brief Set the value of matiere
   * @param newSemestre the new value of semestre
   */
  void setMatiere ( Matiere* newMatiere );
  /**
   * @brief Get the value of matiere
   * @return the value of matiere
   */
  Matiere* getMatiere ( );
  /**
   * @brief Get the value of vectNote
   * @return the value of vectNotes
   */
  vector<Note>& getVectNote ( );
};

#endif // EVALUATION_H
