#ifndef BOUTIQUE_H
#define BOUTIQUE_H

#include "Hotel.h"

class Boutique : public Hotel {
public:
    Boutique(const std::string& nume, const std::string& adresa, double pretPeNoapte, bool areSpa, int rating);
    void afiseazaDetalii() const override ;
    [[nodiscard]] int getRating() const;

private:
    bool areSpa;
    int rating;
};

#endif