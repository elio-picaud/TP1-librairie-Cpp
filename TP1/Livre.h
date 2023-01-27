#pragma once
#include <iostream>
#include <vector>
#include "Date.h"
#include "Auteur.h"

using namespace std;

class Livre
{
private:
	bool _disponible; //disponibilité du livre (oui ou non)
	string _titre;	 //titre de l'oeuvre
	Auteur _auteur;  //auteur du livre
	string _langue;  //langue d'écriture du livre
	string _genre;	 // genre tel sci-fi par exemple
	double _ISBN;	 //International Standard Book Number 
	string _date_publication;
	vector<string> _liste_emprunteur;	//liste des identifiants des précédents emprunteurs

public:
	
	Livre(string titre, Auteur auteur, string langue, string genre, double ISBN, Date date_publication, vector<string> liste_emprunteur);
	
	bool disponible();
	string date_publication();	//ajouter la date de publication du livre
	string titre();
	Auteur auteur();
	string langue();
	string genre();
	double ISBN();
	vector<string> liste_emprunteur();
	
	void AjoutEmprunteur(string id_emprunteur);
	void change_disponible(bool disponible);

	string Nomauteur();
	string Prenomauteur();
	Date Naissanceauteur();

	friend ostream& operator<<(ostream& os, const Livre& livre);
};
