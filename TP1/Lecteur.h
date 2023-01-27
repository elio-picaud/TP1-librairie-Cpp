#pragma once
#include <iostream>
#include <vector>
#include "Livre.h"

class Lecteur
{
private:
	std::string _id; //identifiant du lecteur (utilisé dans le cadre 
	std::string _nom;
	std::string _prenom;
	std::vector<double> _liste_livres_empruntes;  //liste des ISBN des livres empruntés

public:
	Lecteur(std::string id, std::string nom, std::string prenom, vector<double> liste_livres_empruntes); //fiche de lecteur de l'emprunteur
	
	std::string id();
	std::string nom();
	std::string prenom();
	vector<double> liste_livres_empruntes();
	
	void ajout_livre(Livre livre);

	friend ostream& operator<<(ostream& os, const Lecteur& lecteur);
};

