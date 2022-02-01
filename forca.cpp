#include<iostream>
#include<string>
#include<map>
#include<array>
//#include<cstdlib>
#include "letra_existe.hpp"
#include "imprimir_titulo.hpp"
#include "ler_arquivo.hpp"
#include "sorteia_palavra.hpp"
#include "nao_enforcou.hpp"
#include "imprimir_chutes_errados.hpp"
#include "imprimir_acertos.hpp"
#include "tratar_chute_e_mostrar_feedback.hpp"
#include "adicionar_palavra.hpp"
#include "nao_acertou.hpp"

using namespace std;

static string palavra_secreta;
static map<char, bool> chutou;
static array<char,5> chutes_errados;

int* funcao() {
    int* j = new int;

    return j;
}
int main(){
    /*
    int* i;
    i = funcao();

    cout << i << endl;
     
    delete i;
    */
    int indiceErro = 0;
    Forca::imprimir_titulo();
    palavra_secreta=Forca::sorteia_palavra();

    while(Forca::nao_acertou(palavra_secreta,chutou) &&
        Forca::nao_enforcou(chutes_errados,indiceErro)){
        //namespace f=Forca;

        Forca::imprimir_chutes_errados(chutes_errados);
        Forca::imprimir_acertos(palavra_secreta,chutou);
        tratar_chute_e_mostrar_feedback(palavra_secreta,chutes_errados
        ,chutou,indiceErro);
       
    }

    cout << "Fim de jogo !"<< endl;
    cout << "A palavra secreta era: "<<palavra_secreta<<endl;

    if(Forca::nao_acertou(palavra_secreta, chutou)){
        cout << "Você perdeu dessa vez !Tente novamente !"<<endl;
    }else {
        cout<<"Parabéns ! Você acertou a palavra secreta !"<<endl;

        cout << "Você gostaria de adicionar uma nova palavra ao banco ? (S/N) ";
        char resposta;
        cin >> resposta;
        if(resposta == 'S'){
            Forca::adicionar_palavra();
        }
    }

    cin.get();
}