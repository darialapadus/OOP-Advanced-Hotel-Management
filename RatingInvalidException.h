#ifndef RATING_INVALID_EXCEPTION_H
#define RATING_INVALID_EXCEPTION_H

#include <exception>
#include <string>

class RatingInvalidException : public std::exception {
public:
    [[nodiscard]] const char *what() const noexcept override {
        return "Ratingul camerei este prea scazut! Va sfatuim sa alegeti alt Boutique.";
    }
};

#endif