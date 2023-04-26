#include "Resort.h"

Resort::Resort(const std::string& nume, const std::string& adresa, double pretPeNoapte, int tipCamera) :
        Hotel(nume, adresa, pretPeNoapte), tipCamera(tipCamera) {}

int Resort::getTipCamera() const {
    return tipCamera;
}