#include "tratar_chute_e_mostrar_feedback.hpp"
#include "letra_existe.hpp"
#include<iostream>

void tratar_chute_e_mostrar_feedback(const std::string& palavra_secreta,
    std::array<char,5>& chutes_errados,
    std::map<char, bool>& chutou, int& indiceErro){
    char chute;
    std::cout << "Seu chute: ";
    std::cin >> chute;

    chutou[chute]=true;
    std::cout << "O seu chute foi "<< chute << std::endl;

    if(Forca::letra_existe(palavra_secreta,chute)){
        std::cout << "Você acertou ! Seu chute está na palavra."<<std::endl;
    } else {
        std::cout << "Você errou ! Seu chute não está na palavra"<<std::endl;
        chutes_errados[indiceErro++] = chute;
       // chutes_errados.push_back(chute);
    }
    std::cout<<std::endl;
}
