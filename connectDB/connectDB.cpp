#include <mysql.h>
#include <string>
#include <iostream>
using namespace std;

// Defining Constant Variables
#define SERVER "localhost"
#define USER "adminDbGestEval"
#define PASSWORD "123456789"
#define DATABASE "dbGestEval"

int main()
{
    MYSQL *connect;
    connect = mysql_init(NULL);
    if (!connect)
    {
        cout << "Mysql Initialization Failed";
        return 1;
    }
    connect = mysql_real_connect(connect, SERVER, USER, PASSWORD, DATABASE, 0,NULL,0);
    if (connect)
    {
        cout << "Connection Succeeded" << endl;
    }
    else
    {
        cout << "Connection Failed" << endl;
    }
    MYSQL_RES *resultat;
    MYSQL_ROW row;
    mysql_query (connect,"select * from eleve");
    resultat=mysql_store_result(connect);
    unsigned int numrows = mysql_num_rows(resultat);
    cout << " Tables in " << DATABASE << " database " << endl;
    int nbFields=mysql_num_fields(resultat);
	cout << nbFields << endl;
    	while (((row=mysql_fetch_row(resultat)) !=NULL))
    	{	
			cout << "----------------------------" << endl;			
			cout << "|";
    	 	for (unsigned int noField=0;noField<nbFields;noField++)
				{
   					cout << row[noField] << "|";
				}
			cout << endl;
    	}
		cout << "----------------------------" << endl;			
    	mysql_close (connect);
    return 0;
}
