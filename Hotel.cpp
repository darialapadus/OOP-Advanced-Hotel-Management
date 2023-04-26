#include "Hotel.h"

void Hotel::afiseazaDetalii() const {
    std::cout << "Hotelul " << nume << " este situat la adresa " << adresa << " si are un pret de " << pretPeNoapte << " RON/noapte." << std::endl;
}

[[maybe_unused]] void Hotel::afiseazaHoteluri([[maybe_unused]] const std::vector<Hotel> &hotels) {
}

[[maybe_unused]] const std::string& Hotel::getNume() const {
    return nume;
}

[[maybe_unused]] const std::string& Hotel::getAdresa() const {
    return adresa;
}

[[maybe_unused]] double Hotel::getPretPeNoapte() const {
    return pretPeNoapte;
}

void Hotel::afiseazaHoteluri() {
}