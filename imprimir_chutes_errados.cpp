#include "imprimir_chutes_errados.hpp"
#include<iostream>

void Forca::imprimir_chutes_errados(const std::array<char,5>& chutes_errados) {
    std::cout << "Chutes errados: ";
    for (char letra : chutes_errados) {
        std::cout << letra << " ";
    }
    std::cout << std::endl;
}
/*
namespace Forca {
    void imprimir_chutes_errados(const std::vector<char>& chutes_errados) {
        std::cout << "Chutes errados: ";
        for (char letra : chutes_errados) {
            std::cout << letra << " ";
        }
        std::cout << std::endl;
    }
}*/