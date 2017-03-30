#ifndef MATIERE_H
#define MATIERE_H

#include <string>
#include <vector>

using namespace std;
class Matiere
{
private:
	string nomMatiere;
	int coeff;
public:
  Matiere ( );
  void setNomMatiere(string laMatiere);
  string getNomMatiere();
  void setCoeff(int leCoeff);
  int getCoeff();

  void affiche();

};//fin de la classe Matiere
#endif // MATIERE_H
