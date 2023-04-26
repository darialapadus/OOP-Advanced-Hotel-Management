#ifndef BUNGALOW_H
#define BUNGALOW_H

#include "Hotel.h"

class Bungalow : public Hotel {
public:
    Bungalow(const std::string& nume, const std::string& adresa, double pretPeNoapte, bool areSeaView, bool allInclusive);
    void afiseazaDetalii() const override ;
    [[nodiscard]] bool getAllInclusive() const;
private:
    bool areSeaView;
    bool allInclusive{};
};

#endif