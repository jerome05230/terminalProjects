#include "Semestre.h"

// Constructors/Destructors
//  

Semestre::Semestre ( ){}

// Accessor methods
//  
 // Private attribute accessor methods
  //  

  /**
   * Set the value of numSem
   * @param new_var the new value of numSem
   */
  void Semestre::setNumSem ( int newNumSem )   {
      numSem = newNumSem;
  }
  /**
   * Get the value of numSem
   * @return the value of numSem
   */
  int Semestre::getNumSem ( )   {
    return numSem;
  }
  /**
   * Set the value of vectEval
   * @param new_var the new value of vectEval
   */
  void Semestre::setVectEval ( vector<Evaluation> newVectEval )   {
      vectEval = newVectEval;
  }
   /**
   * Get the value of vectEval
   * @return the value of vectEval
   */
  vector<Evaluation> Semestre::getVectEval ( )   {
    return vectEval;
  }


