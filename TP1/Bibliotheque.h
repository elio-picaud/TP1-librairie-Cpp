#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include "Lecteur.h"
#include "Livre.h"
#include "Emprunt.h"
#include "Date.h"



class Bibliotheque
{
private:
	std::vector <Auteur> _liste_auteurs;  //le nom de l'auteur est à prélevé de la classe livre 
	std::vector <Lecteur> _liste_lecteurs;
	std::vector <Livre> _liste_livres;
	std::vector<Emprunt> _liste_emprunts;
	

public:
	Bibliotheque(std::vector <Auteur> liste_auteurs, std::vector <Lecteur> liste_lecteurs, std::vector <Livre> liste_livres);
	
	void ajout_auteur(Auteur auteur);
	void ajout_livre(Livre livre) ;
	void ajout_lecteur(Lecteur lecteur);
	void ajout_emprunt(Emprunt emprunt);

	void supprimer_livre(Livre livre);
	void supprimer_lecteur(Lecteur lecteur);
	void supprimer_emprunt(Emprunt emprunt);

	std::string extract_lecteur(Lecteur lecteur);
	std::string extract_livre(Livre livre); 
	std::string extract_emprunt(Emprunt emprunt);

	void emprunt_livre(Lecteur lecteur, Livre livre, Date date_emprunt);
};

