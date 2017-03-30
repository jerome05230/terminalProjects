#include "section.h"
#include "matiere.h"
#include <vector>
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

//mes containers
vector<Section> vectSections;
vector<Matiere> vectMatieres;

//attente de la frappe d'entree par l'utilisateur
void attente()
{
	string entree;
	cout << endl << "Tapez Entree pour continuer" << endl;
	getline(cin,entree);

}

void afficheSections(vector<Section> leVecteur)
{
	for(int noSection=0;noSection<leVecteur.size();noSection++)
	{
		cout << endl << noSection << "\t";
		leVecteur[noSection].affiche();
	}

}

void afficheMatieres(vector<Matiere> leVecteur)
{
	for(int noMatiere=0;noMatiere<leVecteur.size();noMatiere++)
	{
		cout << endl << noMatiere << "\t";
		leVecteur[noMatiere].affiche();
	}
}

//renvoie l'adresse de la section choisie par l'utilisateur NUll si pas de choix ou choix impossible
Section * sectionSelector(vector<Section>& leVecteur)
{
	//variables locales
	int numeroChoisi;
	int nbSection=leVecteur.size();
	if(nbSection==0) return NULL;
	else
	{
		if(nbSection==1) return &leVecteur[0];
		else
		{
			do
			{
				//affichage des sections
				afficheSections(vectSections);
				//saisie du numéro choisi
				cout << "Tapez le numero de la section choisie (-1 pour annuler): ";
				cin >> numeroChoisi;
				cin.ignore(1);
			}
			while (!(numeroChoisi==-1 || (numeroChoisi>=0 && numeroChoisi<nbSection)));
			if(numeroChoisi==-1) return NULL;
			else
				return &leVecteur[numeroChoisi];
		}
	}
}
/**
 * ma fonction main
 */

int main()
{
	//je crée 2 matieres
	Matiere matiere;
	matiere.setNomMatiere("Anglais");
	matiere.setCoeff(2);
	//ajout dans le vecteur des matières
	vectMatieres.push_back(matiere);
	matiere.setNomMatiere("Chinois");
	matiere.setCoeff(4);
	vectMatieres.push_back(matiere);

	Section::vectAllMatieres=&vectMatieres;

	int choix;//choix de l'utilisateur par rapport au menu
	//qlqs variables locales
	Section nouvelleSection;
	Section* sectionChoisie;
	do
	{
		system("clear");
		cout << endl << "**********Menu principal********" << endl;
		cout << "Tapez 1 pour creer une section" << endl;
		cout << "Tapez 2 pour gérer une section" << endl;
		cout << "Tapez 3 pour lister les sections" << endl;
		cout << "Tapez 9 pour quitter" << endl;
		cout << "Votre choix: ";
		cin >> choix;
		cin.ignore(1);
		switch (choix)
		{
			case 1:nouvelleSection.fromKeyboard();
			       vectSections.push_back(nouvelleSection);
			       break;
			case 2:sectionChoisie=sectionSelector(vectSections);
			       if(sectionChoisie!=NULL)
			       {
				       sectionChoisie->gerer();
			       }
			       break;
			case 3:afficheSections(vectSections);break;
			case 9:cout << "Good bye" << endl;break;
			default:cout << "Please enter a valid choice" << endl;
		}
	}
	while (!(choix==9));
	return 0;
}
