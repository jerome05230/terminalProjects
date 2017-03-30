#include <string>
#include <iostream>
using namespace std;

int main ()
{
	int monEntier1;
	int monEntier2;
	int* pEntierPlusGrand;
	int* pEntierPlusPetit;
	cout << endl << "saisir l'entier 1: ">
	cin >> monEntier1;
	cout << endl << "saisir l'entier 2: ">
	cin >> monEntier2;
	if (monEntier1 > monEntier2){
		pEntierPlusGrand=&monEntier1;
 		pEntierPlusPetit=&monEntier2;
	}
	else {
		pEntierPlusGrand=&monEntier2;
		pEntierPlusPetit=&monEntier1;
	}
	cout << endl <<"le plus grand: " << *pEntierPlusGrand << endl;
	cout << endl <<"le plus petit: " << *pEntierPlusPetit << endl;
	return 0;
}

