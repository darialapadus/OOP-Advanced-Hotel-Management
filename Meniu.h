#ifndef MENIU_H
#define MENIU_H

#include <iostream>
#include <vector>
#include <memory>
#include "Hotel.h"
#include "Resort.h"
#include "Boutique.h"
#include "Bungalow.h"
#include "CameraInvalidaException.h"
#include "RatingInvalidException.h"

class Meniu {
public:
    void afis() {
        try {
            std::vector<std::unique_ptr<Hotel>> hoteluri;

            std::unique_ptr<Resort> r1(new Resort("Danubius", "Ungaria", 350.0, 1));
            std::unique_ptr<Resort> r2(new Resort("Alpine", "Predeal", 450.0, 2));
            std::unique_ptr<Boutique> b1(new Boutique("Kayus", "Busteni", 750.0, true, 80));
            std::unique_ptr<Boutique> b2(new Boutique("Aquarius", "Campulung Moldovenesc", 250.0, false, 90));
            std::unique_ptr<Bungalow> w1(new Bungalow("Makryammos", "Thassos", 300.0, false, true));
            std::unique_ptr<Bungalow> w2(new Bungalow("Ndoto", " Kiwengwac", 900.0, true, false));

            hoteluri.push_back(std::move(r1));
            hoteluri.push_back(std::move(r2));
            hoteluri.push_back(std::move(b1));
            hoteluri.push_back(std::move(b2));
            hoteluri.push_back(std::move(w1));
            hoteluri.push_back(std::move(w2));
            Hotel::afiseazaHoteluri();

            std::cout << std::endl;

            std::cout << std::endl << "Bine ati venit in meniul de management al hotelului!" << std::endl;
            int variante;
            int n;
            do {
                std::cout << std::endl << "Alege o optiune:" << std::endl;
                std::cout << "1. Adauga hoteluri" << std::endl;
                std::cout << "2. Adauga detaliile hotelului" << std::endl;
                std::cout << "3. Arata hotelurile" << std::endl;
                std::cout << "4. Cauta un hotel" << std::endl;
                std::cin >> variante;
                switch (variante) {
                    case 1:
                        std::cout << "Introduceti numarul de hoteluri de adaugat: ";
                        std::cin >> n;
                        break;
                    case 2:
                        for (int i = 0; i < n; i++) {
                            std::string nume, adresa, tip;
                            float pretPeNoapte;
                            std::cout << "Introduceti numele hotelului: ";
                            std::cin >> nume;
                            std::cout << "Introduceti adresa hotelului: ";
                            std::cin >> adresa;
                            std::cout << "Introduceti pret pe noapte al hotelului: ";
                            std::cin >> pretPeNoapte;
                            std::cout << "Introduceti tipul hotelului (Resort/Boutique/Bungalow): ";
                            std::cin >> tip;
                            if (tip == "Resort") {
                                int tipCamera;
                                std::cout << "Introduceti tipul camerei: ";
                                std::cin >> tipCamera;
                                if (tipCamera < 1 || tipCamera > 3) {
                                    throw CameraInvalidaException();
                                }
                                std::unique_ptr<Resort> r(new Resort(nume, adresa, pretPeNoapte, tipCamera));
                                hoteluri.push_back(std::move(r));
                            } else if (tip == "Boutique") {
                                bool areSpa;
                                int rating;
                                std::cout << "Are spa (1 pentru DA, 0 pentru NU)?: ";
                                std::cin >> areSpa;
                                std::cout << "Introduceti ratingul camerei: ";
                                std::cin >> rating;
                                if (rating < 70) {
                                    throw RatingInvalidException();
                                }
                                std::unique_ptr<Hotel> b(new Boutique(nume, adresa, pretPeNoapte, areSpa, rating));
                                hoteluri.push_back(std::move(b));
                            } else if (tip == "Bungalow") {
                                bool areSeaView;
                                bool allInclusive;
                                std::cout << "Are sea view (1 pentru DA, 0 pentru NU)?: ";
                                std::cin >> areSeaView;
                                std::cout << "Are All Inclusive (1 pentru DA, 0 pentru NU)?: ";
                                std::cin >> allInclusive;
                                std::unique_ptr<Hotel> w(new Bungalow(nume, adresa, pretPeNoapte, areSeaView, allInclusive));
                                hoteluri.push_back(std::move(w));
                            } else {
                                std::cout << "Tip de hotel invalid. Va rugam sa incercati din nou." << std::endl;
                            }
                        }
                        break;
                    case 3:
                        std::cout << "Hotelurile disponibile sunt: " << std::endl;
                        for (const auto &hotel: hoteluri) {
                            if (auto *r = dynamic_cast<Resort *>(hotel.get())) {
                                std::cout << "Resort:" << std::endl;
                                hotel->afiseazaDetalii();
                                std::cout << "Tip camera: " << r->getTipCamera() << std::endl;
                            } else if (auto *b = dynamic_cast<Boutique *>(hotel.get())) {
                                std::cout << "Boutique:" << std::endl;
                                hotel->afiseazaDetalii();
                                std::cout << "Rating: " << b->getRating() << std::endl;
                            } else if (auto *w = dynamic_cast<Bungalow *>(hotel.get())) {
                                std::cout << "Bungalow:" << std::endl;
                                hotel->afiseazaDetalii();
                                std::cout << "All inclusive: " << (w->getAllInclusive() ? "DA" : "NU") << std::endl;
                            }
                        }
                        break;
                    case 4:
                        std::string numeHotelCautat;
                        std::cout << "Introduceti numele hotelului cautat: ";
                        std::cin >> numeHotelCautat;
                        bool gasit = false;
                        for (const auto &hotel: hoteluri) {
                            if (hotel->getNume() == numeHotelCautat) {
                                std::cout << "Hotelul cautat exita." << std::endl;
                                hotel->afiseazaDetalii();
                                gasit = true;
                                break;
                            }
                        }
                        if (!gasit) {
                            std::cout << "Hotelul cautat nu a fost gasit." << std::endl;
                        }
                        break;
                }
            }while(variante !=5);
        } catch (const std::exception &ex) {
            std::cerr << "Eroare: " << ex.what() << std::endl;
        }
    }
};

#endif