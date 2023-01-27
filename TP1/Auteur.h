#pragma once
#include <iostream>
#include <string>
#include "Date.h"

class Auteur
{
private:
	int _id_auteur;
	std::string _nom;
	std::string _prenom;
	Date _date_naissance;

public:
	Auteur();
	Auteur(int id_auteur, std::string nom, std::string prenom, Date date_naissance);

	int id_auteur();
	std::string nom();
	std::string prenom();
	Date date();

	friend std::ostream& operator<<(std::ostream& os, const Auteur& auteur);
	

};

