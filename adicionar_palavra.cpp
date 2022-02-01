#include "adicionar_palavra.hpp"
#include "ler_arquivo.hpp"
#include "salvar_no_arquivo.hpp"
#include<iostream>
#include<string>
#include<vector>


void Forca::adicionar_palavra(){
    std::cout << "Digite a nova palavra, usando letras maiúsculas."<<std::endl;

    std::string nova_palavra;
    std::cin >> nova_palavra;

    std::vector<std::string> lista_palavras = ler_arquivo();
    lista_palavras.push_back(nova_palavra);

    salvar_no_arquivo(lista_palavras);
}