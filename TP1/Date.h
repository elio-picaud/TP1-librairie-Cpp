#pragma once
#include <iostream>

#ifndef DATE_H
#define DATE_H

class Date {
public:
	Date(int jour = 1, int mois = 1, int annee = 1);
	int mois() const;
	int jour() const;
	int annee() const;
private:
	int _annee;
	int _mois;
	int _jour;
};

bool isDate(int jour, int mois, int annee); //vérifie que la date entrée soit bien une vraie date
std::string toString(Date D); //convertie une date en string
int annee_actuelle(); //chercher l'annee actuel (sur l'ordi)

#endif // DATE_H
