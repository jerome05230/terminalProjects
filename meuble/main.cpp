#include <string>
#include <iostream>
#include <vector>
#include "Meuble.h"


using namespace std;

vector<Meuble*> vectMeubles;

/*void ajoutMeuble(){
  	string leNom;
	cout << endl << "veuillez entrez le nom de la section: ";
	getline(cin,leNom);
	Meuble newMeuble(leNom);
	cout << endl << "saisir le nombre d'eleves dans cette section: ";
	cin >> Meuble::nbMeuble;
	cin.ignore(1);
	for (int cpt=0;cpt<Meuble::nbMeubles;cpt++){
		newMeuble.ajoutMeuble();
   	}
	vectMeubles.push_back(newMeuble);

}
void afficherMeuble(){
	int nbMeuble=vectMeubles.size();
	cout <<endl << "il y a actuellement " << Meuble::nbMeubles << " section :";
	for(int cpt=0;cpt<nbMeuble;cpt++){
		cout << endl << cpt << " " << vectMeubles[cpt].getMeuble();
	}
}
void suprMeuble(){
	//a remplir
}*/
int main ()
{
vectMeubles.push_back(new Meuble("aymes", 150, 20));
vectMeubles[0]->sePresenter();
vectMeubles.push_back(new Meuble("baron-campos", 40, 20));
vectMeubles[1]->sePresenter();
vectMeubles.push_back(new Meuble("allec", 72, 20));
vectMeubles[2]->sePresenter();
vectMeubles.push_back(new Meuble("bourdon", 2650, 19));
vectMeubles[3]->sePresenter();
vectMeubles.push_back(new Meuble("dervieux", 25, 20));
vectMeubles[4]->sePresenter();
cout << "nombre de meubles:" << Meuble::nbMeubles <<endl;
//Meuble::nbMeubles1=&vectMeubles.size;
delete(vectMeubles[4]);
cout << "nombre de meubles:" << Meuble::nbMeubles <<endl;
/*int choix=9;
do{
	cout << "Menu principal" << endl;
       	cout << "Choisissez une rubrique :" << endl;
       	cout << "1. ajouter un meuble" << endl;
       	cout << "2. rien" << endl;
      	cout << "3. supprimer un meuble" << endl;
       	cout << "4. afficher liste meubles" << endl;
       	cout << "9. Quitter" << endl;
       	cout << "Entrez votre choix (1 a 4): ";
       	cin >> choix; 
  	cin.ignore(1);	
       	switch(choix){
       	    	case 1://creer section
       	          	ajoutMeuble();
       	          	break;
       	    	case 2://modifier section
       	          	modifMeuble();
       	          	break;
       	    	case 3://supprimer section
       	          	suprMeuble();
       	          	break;    
       	    	case 4://afficher section
		  	afficherMeuble();
			break;
	}
	cout << endl << endl;
}
while (!(choix==9)) ;
return 0;
*/
}
