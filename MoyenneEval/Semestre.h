
#ifndef SEMESTRE_H
#define SEMESTRE_H
#include <string>
#include <vector>
#include "Evaluation.h"

using namespace std;
/**
  * class Semestre
  * 
  */

class Semestre
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Semestre ( );

private:
  // Private attributes
  //  

  int numSem;
  vector<Evaluation> vectEval;

public:


  // Private attribute accessor methods
  //  

  /**
   * Set the value of numSem
   * @param new_var the new value of numSem
   */
  void setNumSem ( int newNumSem );
  /**
   * Get the value of numSem
   * @return the value of numSem
   */
  int getNumSem ( );
  /**
   * Set the value of vectEval
   * @param new_var the new value of vectEval
   */
  void setVectEval ( vector<Evaluation> newVectEval );
  /**
   * Get the value of vectEval
   * @return the value of vectEval
   */
  vector<Evaluation> getVectEval () ;
};
#endif // SEMESTRE_H
