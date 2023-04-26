#ifndef CAMERA_INVALIDA_EXCEPTION_H
#define CAMERA_INVALIDA_EXCEPTION_H

#include <exception>
#include <string>

class CameraInvalidaException : public std::exception {
public:
    [[nodiscard]] const char *what() const noexcept override {
        return "Tipul camerei introdus este invalid! Va rugam sa incercati din nou.";
    }
};

#endif