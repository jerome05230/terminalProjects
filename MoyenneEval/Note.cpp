#include "Note.h"


// Constructors/Destructors  

Note::Note ( ) {}
Note::Note (float laNote, Eleve* leNewEleve){
	note= laNote;
	lEleve = leNewEleve;
}
Note::Note (float laNote){
	note= laNote;
}
// initialisation des propriétés statiques

	vector<Eleve>*Note::pVectElevesNote;

// Methods

//---------------------------------------------------------validé-----------------------------------------------
  void Note::saisieNote (){
	cout << "tapez la note de l'étudiant :";
	cin >> note;
	cin.ignore(1);
	cout << "la note que vous avez saisie est: " << note << endl;
  }
// Accessor methods

  void Note::setNote ( float newNote )   {
      note = newNote;
  }
  float Note::getNote ( )   {
    return note;
  }

  void Note::setLEleve ( Eleve* newEleve )   {
      lEleve = newEleve;
  }
  Eleve* Note::getEleve ( )   {
    return lEleve;
  }



