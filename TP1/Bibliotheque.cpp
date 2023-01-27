#include "Bibliotheque.h"
#include <iostream> 
#include <vector>
#include <string>

Bibliotheque::Bibliotheque(std::vector<Auteur> liste_auteurs, std::vector<Lecteur> liste_lecteurs, std::vector<Livre> liste_livres)
{
	_liste_auteurs = liste_auteurs;
	_liste_lecteurs = liste_lecteurs;
	_liste_livres = liste_livres;
}

void Bibliotheque::ajout_auteur(Auteur auteur)
{
    _liste_auteurs.push_back(auteur);
}

void Bibliotheque::ajout_livre(Livre livre)
{
    _liste_livres.push_back(livre);
}

void Bibliotheque::ajout_lecteur(Lecteur lecteur)
{
    _liste_lecteurs.push_back(lecteur);
}

void Bibliotheque::ajout_emprunt(Emprunt emprunt)
{
    _liste_emprunts.push_back(emprunt);
}

void Bibliotheque::supprimer_livre(Livre livre)
{
    _liste_livres.erase(std::remove(_liste_livres.begin(), _liste_livres.end(), livre), _liste_livres.end());
}

void Bibliotheque::supprimer_lecteur(Lecteur lecteur)
{
    auto it = std::find(_liste_lecteurs.begin(), _liste_lecteurs.end(), lecteur);
    if (it != _liste_lecteurs.end()) {
        _liste_lecteurs.erase(it);
    }
}

void Bibliotheque::supprimer_emprunt(Emprunt emprunt)
{
    auto it = find(_liste_emprunts.begin(), _liste_emprunts.end(), emprunt);
    if (it != _liste_emprunts.end()) {
        _liste_emprunts.erase(it);
    }
}


std::string Bibliotheque::extract_lecteur(Lecteur lecteur)
{
    auto it = std::find(_liste_lecteurs.begin(), _liste_lecteurs.end(), lecteur);
    if (it != _liste_lecteurs.end()) {
        std::cout << "Lecteur trouvé" << std::endl;
        std::cout << "Identifiant lecteur :" << lecteur.id() << std::endl;
        std::cout << "Nom :" << lecteur.nom() << std::endl;
        std::cout << "Prenom :" << lecteur.prenom() << std::endl;
        std::cout << "Liste des livres empruntés :";
        for (auto ISBN : lecteur.liste_livres_empruntes()) {
            std::cout << ISBN << " ";
        }
        std::cout << std::endl;
    }
    else {
        return "Lecteur introuvable";
    }
}

string Bibliotheque::extract_livre(Livre livre)
{
    auto it = std::find(_liste_livres.begin(), _liste_livres.end(), livre);
    if (it != _liste_livres.end())
    {
        std::cout << "Livre trouvé" << std::endl;
        std::cout << "Identifiant livre :" << livre.titre() << std::endl;
        std::cout << "Titre du livre :" << livre.Nomauteur() << std::endl;
        std::cout << "Auteur du livre " << std::endl;
        std::cout << "Date de sortie du livre :" << livre.date_publication() << std::endl;
        std::cout << "Genre du livre :" << livre.genre() << std::endl;
        std::cout << "ISBN :" << livre.ISBN() << std::endl;
    }
    else { std::cout << "Livre introuvable" << std::endl; }
}


string Bibliotheque::extract_emprunt(Emprunt emprunt)
{
    std::cout << "Informations de l'emprunt :" << std::endl;
    std::cout << "Date de l'emprunt : " << toString(emprunt.date()) << std::endl;
    std::cout << "Identifiant du livre emprunté : " << emprunt.ISBN() << std::endl;
    std::cout << "Identifiant du lecteur : " << emprunt.id_lecteur() << std::endl;
}

void Bibliotheque::emprunt_livre(Lecteur lecteur, Livre livre, Date date_emprunt)
{
    if (!livre.disponible()) {
        std::cout << "Ce livre n'est pas disponible pour l'emprunt." << std::endl;
    }
    else {
        livre.change_disponible(false);
        Emprunt emprunt(livre, lecteur, date_emprunt);
        _liste_emprunts.push_back(emprunt);
        std::cout << "L'emprunt a été effectué avec succès." << std::endl;
    }
}



//fonction pour modifier un élément de livre
//void Bibliotheque::modify_livre(Livre& livre, std::string titre, std::string auteur, std::string date_publication, std::string genre, std::string ISBN) {
   // livre.set_titre(titre);
   // livre.set_auteur(auteur);
   // livre.set_date_publication(date_publication);
   // livre.set_genre(genre);
   // livre.set_ISBN(ISBN);
//}

//methode pour modifer un élément de livre