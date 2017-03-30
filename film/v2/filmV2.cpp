
#include <string>
#include <iostream>
using namespace std;

int main ()
{
	cout <<"tapez le nom d'un film:";
	string monFilm;
	getline (cin,monFilm);
	cout << monFilm << endl;
	return 0;
}
