#include "Evaluation.h"

// Constructors/Destructors  

Evaluation::Evaluation ( ) {}
Evaluation::Evaluation (int lId, int leSemestre, string laDate,  int leCoef, vector<Note> leVectNotes, Matiere* laNewMatiere) {
	id = lId;
	semestre = leSemestre;
	date = laDate;
	coef = leCoef;
	vectNotes = leVectNotes;
	laMatiere = laNewMatiere;
}
Evaluation::Evaluation (int lId, int leSemestre, string laDate, int leCoef) {
	id = lId;
	semestre = leSemestre;
	date = laDate;
	coef = leCoef; 
}
// initialisation des propriétés statiques
	vector<Matiere*>*Evaluation::pVectMatieresSection; 
	vector<Eleve>*Evaluation::pVectElevesEvaluation;
	vector<Evaluation>*Evaluation::pVectEvaluation;

// Methods
  
//---------------------------------------------------------validé-----------------------------------------------
   void Evaluation::saisieId (){
	int idMax=0;	
	idMax=pVectEvaluation->size();
	id=idMax;
   }
//---------------------------------------------------------validé-----------------------------------------------
   void Evaluation::saisieSemestre (){
	cout << "tapez le semestre de l'évaluation: ";
	cin >> semestre;
	cin.ignore(1);
	cout << "le semestre que vous avez saisie est: " << semestre << endl;
   }
//---------------------------------------------------------validé-----------------------------------------------
   void Evaluation::saisieDate (){
	cout << "tapez la date de l'évaluation: ";
	getline (cin,date);
	cout << "la date que vous avez saisie est: " << date << endl;
   }
//---------------------------------------------------------validé-----------------------------------------------
   void Evaluation::saisieCoef (){
	cout << "tapez le coef de la matiere:";
	float coef;
	cin >> coef;
	cin.ignore(1);
	cout << "le coef que vous avez saisie est: " << coef << endl;
   }
//------------------------------------------------------------------------------------------------------------
   void Evaluation::saisieMatiere ()    {
	int nbMatieres=pVectMatieresSection->size();
	cout << "il y a: " << nbMatieres << " affiliés à la section" << endl;
	cout << "veuillez choisir une matiere en tapant le chiffre correspondant" <<endl;
   		for (int noMat=0;noMat<nbMatieres;noMat++)    {
			cout <<"Tapez "<< noMat << " pour " << pVectMatieresSection->at(noMat)->getNom() << endl;
		}
	int choix;
	cin >> choix;
	cin.ignore(1);
	laMatiere=pVectMatieresSection->at(choix);
	cout << "la matière que vous avez saisie est: " << laMatiere->getNom() << endl;
   }
//------------------------------------------------------------------------------------------------------------
   void Evaluation::saisieNotesEvaluation ()    {
	int nbEleves=pVectElevesEvaluation->size();
	for (int i=0;i<nbEleves;i++)    {
			cout << i << " " << pVectElevesEvaluation->at(i).getNom() << endl;
			Note newNote;			
			newNote.saisieNote();
			newNote.setLEleve(&(pVectElevesEvaluation->at(i)));
			cout << "la note de: " << newNote.getEleve()->getNom() << " est: " << newNote.getNote() << endl;
			vectNotes.push_back(newNote);
		}
   }
//------------------------------------------------------------------------------------------------------------
   void Evaluation::moyenne(){
	 float moyenne=0;
	 int nombreNote=static_cast< float >(vectNotes.size());
	 for(int noNote=0;noNote<nombreNote;noNote++)    {
		 moyenne+=vectNotes[noNote].getNote();
	 }
	 moyenne/=nombreNote;
	 cout << "la moyenne de l'évaluation: " << id << " est: "<< moyenne << endl;;
   }
//------------------------------------------------------------------------------------------------------------
   void Evaluation::afficherNotes()    {
	cout << "l'évaluation saisie est l'évaluation: " << id << endl;
	int nbNotes=vectNotes.size();
	cout << "il y a " << nbNotes << " notes dans l'évaluation" << endl;
	cout << "les notes de l'évaluation sont:" << endl;
	cout << vectNotes[0].getNote() << "vect note 0" << endl;
	for (int noNote=0;noNote<nbNotes;noNote++)    {
		cout <<"coucou";
  		cout << vectNotes[noNote].getEleve()->getPrenom() << " " << vectNotes[noNote].getEleve()->getNom() << " " << vectNotes[noNote].getEleve()->getAge() << " "<< vectNotes[noNote].getNote()<< endl; 
	}
   }

// Accessor methods 

  void Evaluation::setId ( int newEvaluation )   {
      id = newEvaluation;
  }
  int Evaluation::getId ( )   {
    return id;
  }
  void Evaluation::setSemestre ( int newSemestre )   {
      semestre = newSemestre;
  }
  int Evaluation::getSemestre ( )   {
    return semestre;
  }
  void Evaluation::setCoef ( int newCoef )   {
      coef = newCoef;
  }
  int Evaluation::getCoef ( )   {
    return coef;
  }
  void Evaluation::setDate ( string newDate )   {
      date = newDate;
  }
  string Evaluation::getDate ( )   {
    return date;
  }
  void Evaluation::setMatiere ( Matiere* newMatiere )   {
      laMatiere = newMatiere;
  }
  Matiere* Evaluation::getMatiere ( )   {
    return laMatiere;
  }
  vector<Note>& Evaluation::getVectNote ( )   {
    return vectNotes;
  }


