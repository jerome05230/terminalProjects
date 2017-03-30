#ifndef NOTE_H
#define NOTE_H
#include <iostream>
#include <vector>
#include <string>
#include "Eleve.h"
using namespace std;

/**
  * class Note
  */

class Note {

private:

// Private attributes
   
  float note;
  Eleve* lEleve;

public:

// Static attributes

  static vector<Eleve>*pVectElevesNote;

// Constructors/Destructors  

  /**
   * @brief constructor of Evaluation
   */
  Note ( );
  /**
   * @brief constructor of Evaluation
   * @param int laNote
   * @param Eleve* lEleve
   */
  Note (float laNote, Eleve* lEleve);
  /**
   * @brief constructor of Evaluation
   * @param float laNote
   */
  Note (float laNote);
  /**
   * Saisir la note d'un étudiant
   */
  void saisieNote ();
  /**
   * Set the value of note
   * @param new_var the new value of note
   */
  void setNote ( float newNote);
  /**
   * Get the value of note
   * @return the value of note
   */
  float getNote ( );
  /**
   * Set the value of lEleve
   * @param new_var the new value of lEleve
   */
  void setLEleve ( Eleve* newEleve );
  /**
   * @brief Get the value of lEleve
   * @return the value of lEleve
   */
   Eleve* getEleve();
};

#endif // NOTE_H
