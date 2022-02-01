#include<array>
#include<map>
#include<string>
void tratar_chute_e_mostrar_feedback(const std::string& palavra_secreta,
    std::array<char,5>& chutes_errados,
    std::map<char, bool>& chutou, int& indiceErro);