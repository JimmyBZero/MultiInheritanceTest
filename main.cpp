/* 
 * File:   main.cpp
 * Author: Jamex
 *
 * Created on November 23, 2015, 5:10 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;
using std::cout;
using std::endl;

/*
 * 
 */

class MorcegoAvo
{   
    public:
        void VoarComEstilo()
        {
            cout << "Estou voando com estilo!!";
        }
};

class MorcegoPai: public MorcegoAvo
{
    public:
        void VoarRapido()
        {
            cout <<"Estou voando muito rapido!!" << endl;
        }
        void Planar()
        {
            cout <<"Estou planando...";
        }
};

class MorcegoMae
{
    public:
        void VoarTranquilamente()
        {
            cout << "Estou voando tranquilamente..." << endl;
        }
         void Planar()
        {
            cout <<"Estou planando...";
        }
};

class Morceguinho: public MorcegoAvo, public MorcegoPai, public MorcegoMae
{
    public:
        void Apresentar()
        {
            cout << "Ola, sou o Batinho" << endl;
        }
        void Heranca()
        {
            cout << "Sou muito inteligente, por isso sei fazer tudo o que meus pais e meu avo fazem!!!\n\n" << endl;
        }
        void IgualVovo()
        {
            cout << " Igual meu Avo!\n\n" << endl;
        }
        void IgualMamae()
        {
            cout << " Igual minha Mae!\n\n" << endl;
        }
        void IgualPapai()
        {
            cout << " Igual meu Pai!\n\n" << endl;
        }
};

int main() {
    Morceguinho Batinho;
    Batinho.Apresentar();
    Batinho.Heranca();
    cout << "Vou voar e depois planar como meu pai!" << endl;
    Batinho.MorcegoPai::VoarRapido();
    Batinho.MorcegoPai::Planar();
    Batinho.IgualPapai();
    
    cout << "Agora Vou voar e depois planar como minha mae!" << endl;
    Batinho.MorcegoMae::VoarTranquilamente();
    Batinho.MorcegoMae::Planar();
    Batinho.IgualMamae();
    
    cout << "Finalmente vou voar como meu avo!" << endl;
    Batinho.MorcegoPai::VoarComEstilo();
    Batinho.IgualVovo();
      
    return 0;
}

