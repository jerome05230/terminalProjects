#include <string>
#include "Matiere.h"
#include "Eleve.h"
#include "Note.h"
#include "Evaluation.h"
#include "Section.h"

using namespace std;

vector<Eleve> vectEleves;
vector<Note> vectNotes;
vector<Evaluation> vectEvaluations;
vector<Matiere> vectMatieres;
vector<Section> vectSections;

  /**
   * @brief création d'une nouvelle section
   * appel d'une saisie du nom de la section, puis du constructeur de la classe section 
   */
void ajoutSection(){
  	string leNom;
 	int nbEleve;
	cout << "veuillez entrez le nom de la section: ";
	getline(cin,leNom);
	Section newSection(leNom);
	cout << "saisir le nombre d'eleves dans cette section: ";
	cin >> nbEleve;
	cin.ignore(1);
	for (int cpt=0;cpt<nbEleve;cpt++){
		newSection.ajoutEleve();
   	}
	vectSections.push_back(newSection);
}
  /**
   * @brief affichage de la section et de ses élèves
   */
void afficherSection(){
	int nbSection=vectSections.size();
	cout <<endl << "il y a actuellement " << nbSection << " section :";
	for(int cpt=0;cpt<nbSection;cpt++){
		cout << endl << cpt << " " << vectSections[cpt].getNom();
	}
}
  /**
   * @brief modification de la section
   * menu pressentant les différentes opérations possibles sur la section
   */
void modifSection(){
	int choix=9 ,section=-1;
	afficherSection();
	cout << endl <<"veuillez selectionner une section en tapant son numero: ";
	cin >> section;
	cin.ignore(1);

	do{
		cout << "------------Menu Section-----------" << endl;
	      	cout << "Choisissez une rubrique :" << endl;
		cout << "0. ajouter une matiere a la section" << endl;
	      	cout << "1. ajouter un eleve" << endl;
	      	cout << "2. modifier un eleve" << endl;
	       	cout << "3. supprimer un eleve" << endl;
	       	cout << "4. afficher les eleves" << endl;
 	      	cout << "5. ajouter une evaluation" << endl;
      	   	cout << "6. modifier une evaluation" << endl;
       	     	cout << "7. supprimer une evaluation" << endl;
		cout << "8. afficher les evaluation" << endl;
      	   	cout << "9. Quitter" << endl;
      	   	cout << "Entrez votre choix (1 a 8): ";
            	cin >> choix;
		cin.ignore(1);
        	switch(choix){
			case 0: //ajouter une matiere
				vectSections[section].ajouterMatiereSection();
				break;
       		    	case 1://creer section
				vectSections[section].ajoutEleve();
       		          	break;
       		    	case 2://modifier section
				vectSections[section].modifEleve();
       		          	break;
       		    	case 3://supprimer section
				vectSections[section].suprEleve();
       		          	break;  
			case 4://afficher les eleves
				vectSections[section].afficherEleves();
				break;
       		    	case 5://ajout evaluation
				vectSections[section].ajoutEvaluation();
				break;
       		    	case 6://modifier evaluation
				vectSections[section].modifEvaluation();
				break;
       		    	case 7://supprimer evaluation
				vectSections[section].suprEvaluation();
				break;
			case 8://afficher les evaluation
				vectSections[section].afficherEvaluations();
				vectSections[section].initialisation();
				vectSections[section].preparerBulletin();
				vectSections[section].afficherMoyenneEleveMatiere();

				break;
		}
		cout << endl << endl;
	}   
	while (!(choix==9)) ;
}
  /**
   * @brief suppression d'une section
   * supression des élèves, des évaluations, et des matières de la section, 
   */
void suprSection(){
	int choix=9, section=-1;
	afficherSection();
	cout << endl <<"veuillez selectionner une section en tapant son numero: ";
	cin >> section;
	cin.ignore(1);
        delete(&(vectSections[choix]));
}
int main ()
{
Matiere Matiere1("maths", 5); vectMatieres.push_back(Matiere1);
Matiere Matiere2("anglais", 2); vectMatieres.push_back(Matiere2);
Matiere Matiere3("espagnol", 5); vectMatieres.push_back(Matiere3);
Matiere Matiere4("si7", 3); vectMatieres.push_back(Matiere4);

/*Eleve Eleve1("aymes", "hervé", 20); vectEleves.push_back(Eleve1);
Eleve Eleve2("baron-campos", "jérôme", 20); vectEleves.push_back(Eleve2);
Eleve Eleve3("allec", "benjamin", 20); vectEleves.push_back(Eleve3);
Eleve Eleve4("bourdon", "alex", 19); vectEleves.push_back(Eleve4);
Eleve Eleve5("dervieux", "corentin", 20); vectEleves.push_back(Eleve5);

Note Note1(12 , &Eleve1); vectNotes.push_back(Note1);
Note Note2(15 , &Eleve5); vectNotes.push_back(Note2);
Note Note3(17 , &Eleve2); vectNotes.push_back(Note3);
Note Note4(11 , &Eleve4); vectNotes.push_back(Note4);
Note Note5(9 , &Eleve3); vectNotes.push_back(Note5);
Note Note6(18 , &Eleve2); vectNotes.push_back(Note6);
Note Note7(4 , &Eleve4); vectNotes.push_back(Note7);
Note Note8(6 , &Eleve3); vectNotes.push_back(Note8);
Note Note9(15 , &Eleve1); vectNotes.push_back(Note9);
Note Note10(19 , &Eleve5); vectNotes.push_back(Note10);

Evaluation Evaluation1(1, 1, "10/04/16", 3, vectNotes, &Matiere1); vectEvaluations.push_back(Evaluation1);
Evaluation Evaluation2(2, 4, "09/01/14", 4, vectNotes, &Matiere2); vectEvaluations.push_back(Evaluation2);
Evaluation Evaluation3(3, 2, "25/12/15", 3, vectNotes, &Matiere4); vectEvaluations.push_back(Evaluation2);
Evaluation Evaluation4(4, 3, "18/05/16", 7, vectNotes, &Matiere3); vectEvaluations.push_back(Evaluation2);
	
Section Section1("sio", vectEleves, vectEvaluations); vectSections.push_back(Section1);*/

Section::pVectMatieres=&vectMatieres;

int choix=9;
do{
	cout << "------------Menu principal------------" << endl;
       	cout << "Choisissez une rubrique :" << endl;
       	cout << "1. ajouter une section" << endl;
       	cout << "2. modifier section" << endl;
      	cout << "3. supprimer section" << endl;
       	cout << "4. afficher section" << endl;
       	cout << "9. Quitter" << endl;
       	cout << "Entrez votre choix (1 a 4): ";
       	cin >> choix; 
  	cin.ignore(1);	
       	switch(choix){
       	    	case 1://creer section
       	          	ajoutSection();
       	          	break;
       	    	case 2://modifier section
       	          	modifSection();
       	          	break;
       	    	case 3://supprimer section
       	          	suprSection();
       	          	break;    
       	    	case 4://afficher section
		  	afficherSection();
			break;
	}
	cout << endl << endl;
}
while (!(choix==9)) ;
return 0;

}
