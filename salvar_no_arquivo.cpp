
#include "salvar_no_arquivo.hpp"
#include<iostream>
#include<vector>
#include<string>
#include<fstream>

void Forca::salvar_no_arquivo(std::vector<std::string>& nova_lista_de_palavras){
    std::ofstream arquivo;
    arquivo.open("palavras.txt");

    if(arquivo.is_open()){
        arquivo << nova_lista_de_palavras.size()<<std::endl;

        for(std::string palavra:nova_lista_de_palavras){
            arquivo << palavra<<std::endl;
        }

        arquivo.close();
    } else {
        std::cout << "Não foi possível acessar o banco de palavras";
        exit(0);
    }
}