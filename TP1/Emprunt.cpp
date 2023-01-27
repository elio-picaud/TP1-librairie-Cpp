#include "Emprunt.h"
#include "Date.h"
#include "Lecteur.h"
#include "Livre.h"
#include <iostream>

Emprunt::Emprunt( Livre livre, Lecteur& lecteur, Date date)
{
	_date = date;
	_ISBN = livre.ISBN();
	_id_lecteur = lecteur.id(); 
	lecteur.ajout_livre(livre);

	cout << &lecteur << endl;
}

Date Emprunt::date()
{
	return _date;
}

double Emprunt::ISBN()
{
	return _ISBN;
}

std::string Emprunt::id_lecteur()
{
	return _id_lecteur;
}
