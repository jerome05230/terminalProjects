#include <string>
#include <iostream>
using namespace std;

int main ()
{
	int maVariable=19;
	cout << endl << "adresse: " << &maVariable;
	cout << endl << "contenu adresse: " << *&maVariable;
	int* monPointeur;
	monPointeur=new int;
	*monPointeur=25;
	cout << endl << "adresse pointeur: " << &monPointeur;
	cout << endl << "adresse contenu pointeur: " << monPointeur;
	cout << endl <<"contenu: " << *monPointeur;
	cout << endl <<"somme: " << *monPointeur+*&maVariable;
	cout << endl ;
	delete monPointeur;
	return 0;
}
