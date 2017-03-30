#ifndef SECTION_H
#define SECTION_H
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Eleve.h"
#include "Matiere.h"
#include "Evaluation.h"
using namespace std;

 /**
  * class Section
  */

class Section {
	
private:
    
// Private attributes

  string nom;
  vector<Eleve> vectEleves;
  vector<Evaluation> vectEvaluations;
  vector<Matiere*>vectMatieresSection;
  map <Eleve* , map <Matiere* , vector<Note*> > > mapNotesEleveMatiere;

public:

// Static attributes

  static vector<Matiere>*pVectMatieres;

// Constructors/Destructors 

  /**
   * @brief constructor of Section
   */
  Section ( );
  /**
   * @brief constructor of Section
   * @param string laSection
   * @param vector<Eleve> leVectEleves
   * @param vector<Evaluation> leVectEvaluations
   */
  Section (string laSection, vector<Eleve> leVectEleves, vector<Evaluation> leVectEvaluations);
  /**
   * @brief constructor of Section
   * @param string laSection
   */
  Section (string laSection);

//Methods
  /*
   *  @brief initialise tous les vecteur/ maps a vide
   */
   void initialisation();
  /*
   * @brief Saisir le nom de l'étudiant
   */
   void saisieNom ();
  /**
   * @brief saisie d'un membre du vecteur Eleves
   * appel des différentes procédure de saisie des informations de l'élève et appel du constructeur de la classe eleve
   */
   void ajoutEleve();
  /**
   * @brief modifier un eleve 
   */
   void modifEleve();
  /**
   * @brief supprimer un eleve 
   */
   void suprEleve();
  /**
   * @brief présentation de l'étudiant
   */
   void afficherEleves();
  /**
   * @brief saisie des évaluation du vecteur Evaluation
   */
   void ajoutEvaluation();
  /**
   * @brief modifier un evaluation 
   */
   void modifEvaluation();
  /**
   * @brief supprimer une evaluation
   */
   void suprEvaluation();
  /**
   * @brief affichage de la section et de ces élèves
   */
   void afficherEvaluations();
  /**
   * @brief ajouter une matiere a la section
   */
   void ajouterMatiereSection ();
  /**
   * @brief affichage des matieres de la section
   */
   void afficherMatieres();
  /**
   * @brief affiche la moyenne d'un élève pour une matiere
   */
   void afficherMoyenneEleveMatiere();
  /**
   * @brief prépare le bulletin d'un élève
   */
   void preparerBulletin();
  /**
   * @brief recupére une évaluation
   */
   Evaluation getEval();
  /**
   * @brief récupère un élève
   */
   Eleve getEleve();

// Private attribute accessor methods 

  /**
   * @brief Get the value of section
   * @return the value of section
   */
  string getNom ( );
  /**
   * @brief Get the value of eleve
   * @return the value of eleve
   */
  vector<Eleve> getVectEleve ( );
};

#endif // SECTION_H
