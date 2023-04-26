#ifndef HOTEL_H
#define HOTEL_H

#include <string>
#include <utility>
#include <vector>
#include <iostream>

class Hotel {

protected:
    double pretPeNoapte;
public:
    Hotel(std::string nume, std::string adresa, double pretPeNoapte) :
            nume(std::move(nume)), adresa(std::move(adresa)), pretPeNoapte(pretPeNoapte) {}

    virtual void afiseazaDetalii() const;

    [[maybe_unused]] static void afiseazaHoteluri(const std::vector<Hotel>& hotels);

    [[maybe_unused]] [[nodiscard]] const std::string &getNume() const;

    [[maybe_unused]] [[nodiscard]] const std::string &getAdresa() const;

    [[maybe_unused]] [[nodiscard]] double getPretPeNoapte() const;

    static void afiseazaHoteluri();

    std::string adresa;
    std::string nume;
};

#endif