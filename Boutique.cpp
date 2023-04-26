#include "Boutique.h"

Boutique::Boutique(const std::string& nume, const std::string& adresa, double pretPeNoapte, bool areSpa, int rating) :
        Hotel(nume, adresa, pretPeNoapte), areSpa(areSpa), rating(rating) {}

void Boutique::afiseazaDetalii() const {
    std::cout << "Boutique " << nume << " este situat la adresa " << adresa << " si are un pret de " << pretPeNoapte << " RON/noapte." << "Spa: " << (areSpa ? "Da" : "Nu") << std::endl;
}

int Boutique::getRating() const {
    return rating;
}