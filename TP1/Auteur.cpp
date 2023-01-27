#include "Auteur.h"

Auteur::Auteur()
{
	_id_auteur = 0;
	_nom = "";
	_prenom = "";
	_date_naissance;
}

Auteur::Auteur(int id_auteur, std::string nom, std::string prenom, Date date_naissance)
{
	_id_auteur = id_auteur;
	_nom = nom;
	_prenom = prenom;
	_date_naissance = date_naissance;
}

int Auteur::id_auteur()
{
	return _id_auteur;
}

std::string Auteur::nom()
{
	return _nom;
}

std::string Auteur::prenom()
{
	return _prenom;
}

Date Auteur::date()
{
	return _date_naissance;
}

std::ostream& operator<<(std::ostream& os, const Auteur& auteur)
{
	os << "Nom : " << auteur._nom << std::endl;
	os << "Prénom : " << auteur._prenom << std::endl;
	os << "Date de naissance : " << toString(auteur._date_naissance) << std::endl;
	os << "Identifiant : " << auteur._id_auteur << std::endl;
	return os;
}