#include <string>
#include <iostream>
#include <map>
using namespace std;

int main ()
{
	int sortie=0;
	string mois="";
	map <string,int> mapMois;
	mapMois["janvier"]=31;
	mapMois["fevrier"]=28;
	mapMois["mars"]=31;	
	mapMois["avril"]=30;
	mapMois["mai"]=31;
	mapMois["juin"]=30;
	mapMois["juillet"]=31;
	mapMois["aout"]=31;
	mapMois["septembre"]=30;
	mapMois["octobre"]=31;
	mapMois["novembre"]=30;
	mapMois["decembre"]=31;
	do {
		cout << "veuillez saisir le mois a afficher: " << endl;
		getline (cin,mois);
		if (mapMois.count(mois)>0){
			cout << "le mois de " << mois << " comporte " << mapMois[mois] << " jours!!!!" << endl ;
		}
		else{
			sortie=1;
			cout << "le mois saisie n'existe pas , au revoir!" <<endl;
		 	for(map<string, int>::iterator it=mapMois.begin(); it!=mapMois.end(); ++it)
    			{
		        	cout << it->first << " a " << it->second << " mois;" << endl;
    			}
		}
	}
	while (!(sortie==1));
	return 0;
}
