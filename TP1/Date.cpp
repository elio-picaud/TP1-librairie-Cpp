#include "Date.h"
#include <assert.h> 
#include <string>
#include <iostream>
#include <format>
#include <chrono>
#include <stdlib.h> //librairie qui prend en compet stoi


Date::Date(int jour, int mois, int annee) : _jour(jour), _mois(mois), _annee(annee) {
    bool status = isDate(jour, mois, annee);
    if (status == false) std::cout << "La date entree n'est pas valide" << std::endl;
    assert(status && "Date is not valid");
}

int Date::mois() const 
{
    return _mois;
}

int Date::jour() const 
{
    return _jour;
}

int Date::annee() const
{
    return _annee;
}



/**
 *
 * Helper functions
 *
*/

bool isDate(int jour, int mois, int annee) {
    if ((jour < 1) || (jour > 31)) return false;
    if ((mois < 1) || (mois > 12)) return false;
    if ((jour == 2) && (jour > 28)) return false;
    if (((mois == 4) || (mois == 6) ||
        (mois == 9) || (mois == 11)) && (jour > 30)) return false;
    if (annee > annee_actuelle() ) return false; //on vériie que l'annee entrée ne soit pas superieur à celle actuelle
    return true;
}


std::string toString(Date D) {
    return std::to_string(D.jour()) + "/" + std::to_string(D.mois()) + "/" + std::to_string(D.annee());
}

int annee_actuelle()
{
    const auto now = std::chrono::system_clock::now();
    std::string A = std::format("{:%Y}", now);
    return stoi(A); //stoi est un fonction intégré qui permet de convertir les string en int
}
