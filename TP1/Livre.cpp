#include "Livre.h"
#include "Date.h"
#include <string>


using namespace std;

Livre::Livre(string titre, Auteur auteur, string langue, string genre, double ISBN, Date date_publication, vector<string> liste_emprunteur)
{
	_titre = titre;
	_auteur = auteur;
	_langue = langue;
	_genre = genre;
	_ISBN = ISBN;
	_date_publication = toString(date_publication); 
	_liste_emprunteur = liste_emprunteur;
}



bool Livre::disponible()
{
	return _disponible;
}

string Livre::date_publication()
{
	return _date_publication;
}

string Livre::titre()
{
	return _titre;
}
Auteur Livre::auteur()
{
	return _auteur;
}
string Livre::langue()
{
	return _langue;
}
string Livre::genre()
{
	return _genre;
}
double Livre::ISBN()
{
	return _ISBN;
}

vector<string> Livre::liste_emprunteur()
{
	return _liste_emprunteur ;
}

void Livre::AjoutEmprunteur(string id_emprunteur)
{
	_liste_emprunteur.push_back(id_emprunteur);
}

void Livre::change_disponible(bool disponible)
{
		_disponible = disponible;
}

string Livre::Nomauteur()
{
	return _auteur.nom();
}

string Livre::Prenomauteur()
{
	return _auteur.prenom();
}

Date Livre::Naissanceauteur()
{
	return _auteur.date();
}
;

ostream& operator<<(ostream& os, const Livre& livre)
{
	os << "Titre : " << livre._titre << endl;
	os << "Auteur : " << livre._auteur << endl;
	os << "Langue : " << livre._langue << endl;
	os << "Genre : " << livre._genre << endl;
	os << "ISBN : " << livre._ISBN << endl;
	os << "Date de publication : " << livre._date_publication << endl;
	os << "Disponibilité : " << livre._disponible << endl;
	os << "Liste des emprunteurs : " << endl;
	for (int i = 0; i < livre._liste_emprunteur.size(); i++)
	{
		os << livre._liste_emprunteur[i] << endl;
	}
	return os;
}
