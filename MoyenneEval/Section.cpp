#include "Section.h"
#include <typeinfo>
// Constructors/Destructors

Section::Section ( ) {}
Section::Section (string nomSection, vector<Eleve> leVectEleves, vector<Evaluation> leVectEvaluations) {
nom = nomSection;
vectEleves = leVectEleves;
vectEvaluations = leVectEvaluations;
}
Section::Section (string nomSection) {
nom = nomSection;
}

// initialisation des propriétés statiques

vector<Matiere>*Section::pVectMatieres;

// Methods

//---------------------------------------------------------validé-----------------------------------------------
   void Section::initialisation(){
	mapNotesEleveMatiere.clear();
	}
//---------------------------------------------------------validé-----------------------------------------------
   void Section::saisieNom (){
	cout << "tapez le nom de la section: ";
	getline (cin,nom);
	cout << "le nom que vous avez saisie est: " << nom << endl;
   }
//---------------------------------------------------------validé-----------------------------------------------
   void Section::ajoutEleve(){
   	Eleve newEleve;
   	newEleve.saisieNom();
   	newEleve.saisiePrenom();
   	newEleve.saisieAge();
   	vectEleves.push_back(newEleve);
   }
//------------------------------------------------------------------------------------------------------------
   void Section::ajoutEvaluation(){
	Evaluation::pVectElevesEvaluation=&vectEleves;
	Evaluation::pVectEvaluation=&vectEvaluations;
   	Evaluation newEvaluation;
   	newEvaluation.saisieId();
   	newEvaluation.saisieSemestre();
   	newEvaluation.saisieCoef();
   	newEvaluation.saisieDate();
   	newEvaluation.saisieMatiere();
	newEvaluation.saisieNotesEvaluation();
   	vectEvaluations.push_back(newEvaluation);
   }
//------------------------------------------------------------------------------------------------------------
   void Section::ajouterMatiereSection (){
	Evaluation::pVectMatieresSection=&vectMatieresSection;
	int nbMatieres=pVectMatieres->size();
	cout << "veuillez choisir une matiere en tapant le chiffre correspondant" <<endl;
   		for (int i=0;i<nbMatieres;i++)
   		{
			cout << i << " " << pVectMatieres->at(i).getNom() << endl;
		}
	int choix;
	cin >> choix;
	cin.ignore(1);
	vectMatieresSection.push_back(&(pVectMatieres->at(choix)));
	cout << "matiere&: " << &(pVectMatieres->at(choix)) << endl;
	int nbMatieresSection=vectMatieresSection.size();
	cout << "la matière que vous avez saisie est: " << pVectMatieres->at(choix).getNom() << endl;
	cout << "il y a: " << nbMatieresSection << " matiere dans la section" << endl;
	for(int i=0;i<nbMatieresSection;i++){
		cout << endl << i << " " << Evaluation::pVectMatieresSection->at(i)->getNom();
	}
    }
//---------------------------------------------------------validé-----------------------------------------------
   void Section::afficherEleves(){
	int nbEleves=vectEleves.size();
	cout << "il y a " << nbEleves << " eleves dans la section" << endl;
	cout << "les elèves de la section sont:" << endl;
	for (int i=0;i<nbEleves;i++){
	    cout << vectEleves[i].getNom() << " " << vectEleves[i].getPrenom() << " " << vectEleves[i].getAge() << endl;  
	}	       
   }
//---------------------------------------------------------validé-----------------------------------------------
   void Section::afficherMatieres(){
	int nbMatieres=vectMatieresSection.size();
	cout << "il y a " << nbMatieres << " eleves dans la section" << endl;
	cout << "les elèves de la section sont:" << endl;
	for (int i=0;i<nbMatieres;i++){
	    cout << vectMatieresSection[i]->getNom();
	}	       
   }
//---------------------------------------------------------validé-----------------------------------------------
   void Section::afficherEvaluations(){
	int nbEvals=vectEvaluations.size();
	cout << "il y a " << nbEvals << " evaluations dans la section" << endl;
	cout << "les evaluations de la section sont:" << endl;  
	for (int i=0;i<nbEvals;i++){
	    cout << "id: " << vectEvaluations[i].getId() << endl;
	    cout << "semestre: " << vectEvaluations[i].getSemestre() << endl;		
   	    cout << "date: " << vectEvaluations[i].getDate() << endl;
	    cout << "coef: " << vectEvaluations[i].getCoef()<< endl ;  	    
	    cout << "matiere: " << vectEvaluations[i].getMatiere()->getNom() << endl << endl;
	}	       
   }
//------------------------------------------------------------------------------------------------------------
   void Section::modifEleve(){
	   //a remplir
	     }
//------------------------------------------------------------------------------------------------------------
   void Section::suprEleve(){
	   //a remplir
   }
//------------------------------------------------------------------------------------------------------------
   void Section::modifEvaluation(){
	Note::pVectElevesNote=&vectEleves;
	int choix=9;
	afficherEvaluations();
	cout << endl <<"veuillez selectionner une évaluation en tapant son numero: ";
	cin >> nom;
	cin.ignore(1);
	do{
		cout << "------------Menu Evaluations-----------" << endl;
	      	cout << "Choisissez une rubrique :" << endl;
		cout << "0. ajouter les notes des élèves" << endl;
	      	cout << "1. modifier les notes des élèves" << endl;
	      	cout << "2. mofidier l'id " << endl;
	       	cout << "3. mofidier le semestre" << endl;
	       	cout << "4. mofidier la date" << endl;
 	      	cout << "5. mofidier le coef" << endl;
      	   	cout << "6. mofidier la matiere" << endl;
       	     	cout << "7. calculer la moyenne de l'évaluation" << endl;
		cout << "8. afficher les notes" << endl;
      	   	cout << "9. Quitter" << endl;
     	   	cout << "Entrez votre choix (1 a 8): ";
            	cin >> choix;
		cin.ignore(1);
        	switch(choix){
			/*	case 0: //ajouter les notes des élèves
				vectEvaluations[choix].ajouterNotesEvaluation();
				break;
       		    	case 1://modifier les notes des élèves
				vectEvaluations[choix].ajoutEleve();
       		          	break;
       		    	case 2://mofidier l'id
				vectEvaluations[choix].modifEleve();
       		          	break;
       		    	casee 3://mofidier le semestre
				vectEvaluations[choix].suprEleve();).
       		          	break;  
			case 4://mofidier la date
				vectEvaluations[choix].afficherEleves();
				break;
       		    	case 5://mofidier le coef
				vectEvaluations[choix].ajoutEvaluation();
				break;
       		    	case 6://mofidier la matiere
				vectEvaluations[choix].modifEvaluation();
				break
       		    	*/case 7: //calculer la moyenne de l'évaluation
				vectEvaluations[choix].moyenne();
				break;
			case 8: //afficher les notes
				vectEvaluations[choix].afficherNotes();
				break;
		}
		cout << endl << endl;
	}   
	while (!(choix==9)) ;
   }
//------------------------------------------------------------------------------------------------------------
   void Section::suprEvaluation(){
	   //a remplir
   }
//------------------------------------------------------------------------------------------------------------
   void Section::preparerBulletin(){
	mapNotesEleveMatiere.clear();
	for (int noEval=0;noEval<vectEvaluations.size();noEval++){
		Matiere* laMatiere=vectEvaluations[noEval].getMatiere();
		vector<Note>& vectNotesBulletin=vectEvaluations[noEval].getVectNote();
		for (int j=0;j<vectNotesBulletin.size();j++){
			Eleve* lEleve=vectNotesBulletin[j].getEleve();
			Note* laNote=&(vectNotesBulletin[j]);				
			mapNotesEleveMatiere[lEleve][laMatiere].push_back(laNote);
			cout << mapNotesEleveMatiere[lEleve][laMatiere][j] << endl;
		}
	}
   }
//------------------------------------------------------------------------------------------------------------
   void Section::afficherMoyenneEleveMatiere(){
	for(map <Eleve* , map <Matiere* , vector<Note*> > >::iterator it1=mapNotesEleveMatiere.begin(); it1!=mapNotesEleveMatiere.end(); ++it1){
		map <Matiere* , vector<Note*> > mapDeMap = it1->second;
		for(map <Matiere* , vector<Note*> >::iterator it2=mapDeMap.begin(); it2!=mapDeMap.end(); ++it2){
			float moyenne=0;
			vector<Note*> &vectNotesTemp=it2->second;
		 	float nombreNote=static_cast< float >(vectNotesTemp.size());
			cout << "nbNotes: " << vectNotesTemp.size() << endl;
	 		for(int noNote=0;noNote<nombreNote;noNote++){
		 		moyenne+=vectNotesTemp[noNote]->getNote();
			}
	 		moyenne/=nombreNote;
	 		cout << "la moyenne de: " << it1->first->getNom() << " " << it1->first->getPrenom()<< " pour la matiere: " << it2->first->getNom() << " est: " << moyenne << endl;
   		}
    	}
   }



//   Evaluation* Section::getEval(){
//	   return lEvaluations;
//   }
//  Eleve* Section::getEleve(){
//	   return lEleve;
//   }

// Accessor methods
 
// Private attribute accessor methods 

  string Section::getNom ( ){
    return nom;
  }
vector<Eleve>  Section::getVectEleve ( ){
   return vectEleves;
  }
