#ifndef RESORT_H
#define RESORT_H

#include "Hotel.h"

class Resort : public Hotel {
public:
    Resort(const std::string& nume, const std::string& adresa, double pretPeNoapte, int tipCamera);
    [[nodiscard]] int getTipCamera() const;
private:
    int tipCamera;
};

#endif