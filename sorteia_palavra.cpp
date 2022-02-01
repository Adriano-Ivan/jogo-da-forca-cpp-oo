#include "sorteia_palavra.hpp"
#include "ler_arquivo.hpp"
#include<iostream>
#include<vector>
#include<ctime>

std::string Forca::sorteia_palavra() {
    std::vector<std::string> palavras = Forca::ler_arquivo();

    srand(time(NULL));
    int indice_palavra = rand() % palavras.size();

    return palavras[indice_palavra];
 }


