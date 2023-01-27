#include <iostream>
#include "Lecteur.h"
#include "Emprunt.h"
#include "Livre.h"
#include "Auteur.h"
#include "Bibliotheque.h"

int main()
{
    Auteur auteur1(1, "NomAuteur1", "PrenomAuteur1", Date(1, 1, 1980));
    Auteur auteur2(2, "NomAuteur2", "PrenomAuteur2", Date(2, 2, 1970));
    Auteur auteur3(3, "NomAuteur3", "PrenomAuteur3", Date(3, 3, 1990));

    Livre livre1("Titre1", auteur1, "Français", "Science-fiction", 9780123456781, Date(1, 1, 2000),{});
    Livre livre2("Titre2", auteur2, "Anglais", "Thriller", 9780123456782, Date(2, 2, 2005),{});
    Livre livre3("Titre3", auteur3, "Espagnol", "Romance", 9780123456783, Date(3, 3, 2010),{});
    Livre livre4("Titre4", auteur1, "Français", "Fantaisie", 9780123456784, Date(4, 4, 2015), {});
    Livre livre5("Titre5", auteur2, "Anglais", "Horreur", 9780123456785, Date(5, 5, 2020), {});
    Livre livre6("Titre6", auteur3, "Espagnol", "Drama", 9780123456786, Date(1, 1, 2000), {});
    Livre livre7("Titre7", auteur1, "Français", "Philosophie", 9780123456787, Date(2, 2, 2005), {});
    Livre livre8("Titre8", auteur2, "Anglais", "Poésie", 9780123456788, Date(3, 3, 2010), {});
    Livre livre9("Titre9", auteur3, "Espagnol", "Science économique", 9780123456789, Date(4, 4, 2015), {});
    Livre livre10("Titre10", auteur1, "Français", "Essai", 97801234567890, Date(5, 5, 2020), {});

    Lecteur lecteur1("ID1", "NomLecteur1", "PrénomLecteur1", {});
    Lecteur lecteur2("ID2", "NomLecteur2", "PrénomLecteur2", {});
    Lecteur lecteur3("ID3", "NomLecteur3", "PrénomLecteur3", {});
}
