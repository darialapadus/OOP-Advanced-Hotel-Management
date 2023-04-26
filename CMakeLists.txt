cmake_minimum_required(VERSION 3.24)
project(Tema2_poo)

set(CMAKE_CXX_STANDARD 17)

add_executable(Tema2_poo main.cpp Meniu.h Hotel.h Hotel.cpp Resort.h Resort.cpp Boutique.h Boutique.cpp Bungalow.h Bungalow.cpp CameraInvalidaException.h RatingInvalidException.h)
