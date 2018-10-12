#include <iostream>
#include "../include/Instancia.h"
#include "../include/Enade.h"
#include <vector>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    Instancia insta;
    vector <Enade> enades = insta.getInstancias();
    for(int i=0;i<enades.size();i++){
        if(enades[i].getAreaAvaliacao() == "SISTEMAS DE INFORMAÇÃO" && enades[i].getMunicipioCurso() == "Juiz de Fora" ){
            cout<<enades[i].getAreaAvaliacao()<<endl;
            cout<<enades[i].getMunicipioCurso()<<endl;
            cout<<enades[i].getNomeIes()<<endl;
            cout<<enades[i].getConceitoEnadeFaixa()<<endl;
            cout<<"\n\n"<<endl;
        }

    }
    cout<<enades[1].getNomeIes()<<endl;
    cout<<enades[1].getConceitoEnadeFaixa()<<endl;
    insta.solucao();
}
