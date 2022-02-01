
#include "letra_existe.hpp"

bool Forca::letra_existe(const std::string& palavra_secreta,char letra_do_chute){
    for(char letra_da_palavra : palavra_secreta){
        if(letra_do_chute == letra_da_palavra){
            return true;
        }
    }
    return false;
}