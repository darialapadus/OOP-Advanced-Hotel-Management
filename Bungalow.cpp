#include "Bungalow.h"

Bungalow::Bungalow(const std::string& nume, const std::string& adresa, double pretPeNoapte, bool areSeaView, bool allInclusive)
        : Hotel(nume, adresa, pretPeNoapte), areSeaView(areSeaView), allInclusive(allInclusive) {}

void Bungalow::afiseazaDetalii() const {
    std::cout << "Bungalow " << nume << " este situat la adresa " << adresa << " si are un pret de " << pretPeNoapte << " RON/noapte." << "Sea view: " << (areSeaView ? "Da" : "Nu") << std::endl;
}

bool Bungalow::getAllInclusive() const {
    return allInclusive;
}