#pragma once
#include "Date.h"
#include "Lecteur.h"
#include "Livre.h"
#include <iostream>

class Emprunt
{
private:
	Date _date;
	double _ISBN;
	std::string _id_lecteur;
public:
	Emprunt(Livre livre, Lecteur& lecteur, Date date );
	Date date();
	double ISBN();
	std::string id_lecteur();
};

