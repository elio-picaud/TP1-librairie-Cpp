#include "Lecteur.h"
#include <iostream>

Lecteur::Lecteur(std::string id, std::string nom, std::string prenom, vector<double> liste_livres_empruntes)
{
	_id = id;
	_nom = nom;
	_prenom = prenom;
	_liste_livres_empruntes = liste_livres_empruntes;

}



std::string Lecteur::id()
{
	return _id;
}

std::string Lecteur::nom()
{
	return _nom;
}

std::string Lecteur::prenom()
{
	return _prenom;
}

vector<double> Lecteur::liste_livres_empruntes()
{
	return _liste_livres_empruntes;
}


void Lecteur::ajout_livre(Livre livre)
{
	_liste_livres_empruntes.push_back( livre.ISBN() );
}

ostream& operator<<(ostream& os, const Lecteur& lecteur)
{
	os << "Nom : " << lecteur._nom << endl;
	os << "Prénom : " << lecteur._prenom << endl;
	os << "Identifiant : " << lecteur._id << endl;
	
	return os;
}
