#include "ler_arquivo.hpp"
#include<iostream>
#include<fstream>
#include<string>
#include<vector>


std::vector<std::string> Forca::ler_arquivo(){
    std::ifstream arquivo;
    arquivo.open("palavras.txt");

    if(arquivo.is_open()){
        int quantidade_palavras;
        arquivo >> quantidade_palavras;
/*
        cout << "O arquivo possui "<<quantidade_palavras<<" palavras."<<endl;*/

        std::vector<std::string> palavras_do_arquivo;

        for(int i = 0; i < quantidade_palavras;i++){
            std::string palavra_lida;
            arquivo >> palavra_lida;
            //cout <<"Na linha "<< i <<": " << //palavra_lida << endl;
            palavras_do_arquivo.push_back(palavra_lida);
        }
        arquivo.close();
        return palavras_do_arquivo;
    }else{
        std::cout<<"Não foi possível acessar o banco de palavras."<<std::endl;
        exit(0);
    }
}