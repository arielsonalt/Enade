#include "Instancia.h"
#include "../include/Enade.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include<string>
#include <locale>
#include <vector>
using namespace std;
Instancia::Instancia()
{
    setlocale(LC_ALL,"portuguese");
    readData();
}
void Instancia::setInstancias(Enade a)
{
   instancias.push_back(a);
}

vector <Enade> Instancia::getInstancias()
{
    return instancias;
}
void Instancia::solucao()
{
    ofstream file;
    file.open("Solucao.txt");

    for(unsigned int i=0; i < instancias.size(); i++) {

                file<<"{\n";
                file<<"     \"Ano\":\""<<instancias[i].getAno()<<"\",\n";
                file<<"     \"codigoArea\":\""<<instancias[i].getCodigoArea()<<"\",\n";
                file<<"     \"areaAvaliacao\":\""<<instancias[i].getAreaAvaliacao()<<"\",\n";
                file<<"     \"codigoIes\":\""<<instancias[i].getCodigoIes()<<"\",\n";
                file<<"     \"nomeIes\":\""<<instancias[i].getNomeIes()<<"\",\n";
                file<<"     \"siglaIes\":\""<<instancias[i].getSiglaIes()<<"\",\n";
                file<<"     \"organizaçãoAcademica\":\""<<instancias[i].getOrganizacaoAcademica()<<"\",\n";
                file<<"     \"categoriaAdministrativa\":\""<<instancias[i].getCategoriaAdministrativa()<<"\",\n";
                file<<"     \"codigoCurso\":\""<<instancias[i].getCodigoCurso()<<"\",\n";
                file<<"     \"modalidadeEnsino\":\""<<instancias[i].getModalidadeEnsino()<<"\",\n";
                file<<"     \"codigoMunicípio\":\""<<instancias[i].getCodigoMunicipio()<<"\",\n";
                file<<"     \"municipioCurso\":\""<<instancias[i].getMunicipioCurso()<<"\",\n";
                file<<"     \"siglaUf\":\""<<instancias[i].getSiglaUf()<<"\",\n";
                file<<"     \"numeroConcluintesInscritos\":\""<<instancias[i].getNumeroConcluintesInscritos()<<"\",\n";
                file<<"     \"numeroConcluintesParticipantes\":\""<<instancias[i].getNumeroConcluintesParticipantes()<<"\",\n";
                file<<"     \"notaBrutaFg\":\""<<instancias[i].getNotaBrutaFg()<<"\",\n";
                file<<"     \"notaPadronizadaFg\":\""<<instancias[i].getNotaPadronizadaFg()<<"\",\n";
                file<<"     \"notaBrutaCe\":\""<<instancias[i].getNotaBrutaCe()<<"\",\n";
                file<<"     \"notaPadronizadaCe\":\""<<instancias[i].getNotaPadronizadaCe()<<"\",\n";
                file<<"     \"conceitoEnadeContinuo\":\""<<instancias[i].getConceitoEnadeContinuo()<<"\",\n";
                file<<"     \"conceitoEnadeFaixa\":\""<<instancias[i].getConceitoEnadeFaixa()<<"\",\n";
                file<<"},\n";
    }
    file.close();
}

void Instancia::readData()
{
    vector <string> lista;
    string linha;

    ifstream arquivo;
    arquivo.open("enade.txt");

    while (arquivo.good())
    {
        getline(arquivo, linha);
        lista.push_back(linha);

    }

    for(int i=0; i<lista.size(); i++){

        Enade enade;
        int num = 1;
        string texto;
        string linha2 = lista[i];
        for(int k = 0; k < linha2.size();k++){
            if(linha2[k] != ';'){
                texto += linha2[k];

            }else{
                if(num == 1){
                    enade.setAno(texto);

                    texto = "";
                }else if( num == 2){
                    enade.setCodigoArea(texto);
                    texto = "";
                }else if( num == 3){
                   enade.setAreaAvaliacao(texto);
                   texto = "";
                }else if( num == 4){
                    enade.setCodigoIes(texto);
                    texto = "";
                }else if( num == 5){
                    enade.setNomeIes(texto);
                    texto = "";
                }else if( num == 6){
                    enade.setSiglaIes(texto);
                    texto = "";
                }else if( num == 7){
                    enade.setOrganizacaoAcademica(texto);
                    texto = "";
                }else if( num == 8){
                    enade.setCategoriaAdministrativa(texto);
                    texto = "";
                }else if( num == 9){
                    enade.setCodigoCurso(texto);
                    texto = "";
                }else if( num == 10){
                    enade.setModalidadeEnsino(texto);
                    texto = "";
                }else if( num == 11){
                    enade.setCodigoMunicipio(texto);
                    texto = "";
                }else if( num == 12){
                    enade.setMunicipioCurso(texto);
                    texto = "";
                }else if( num == 13){
                    enade.setSiglaUf(texto);
                    texto = "";
                }else if( num == 14){
                    enade.setNumeroConcluintesInscritos(texto);
                    texto = "";
                }else if( num == 15){
                    enade.setNumeroConcluintesParticipantes(texto);
                    texto = "";
                }else if( num == 16){
                    enade.setNotaBrutaFg(texto);
                    texto = "";
                }else if( num == 17){
                    enade.setNotaPadronizadaFg(texto);
                    texto = "";
                }else if( num == 18){
                    enade.setNotaBrutaCe(texto);
                    texto = "";
                }else if( num == 19){
                    enade.setNotaPadronizadaCe(texto);
                    texto = "";
                }else if( num == 20){
                    enade.setConceitoEnadeContinuo(texto);
                    texto = "";
                }else{
                    enade.setConceitoEnadeFaixa(texto);
                    texto = "";
                }
                num++;
            }
        }
        setInstancias(enade);

    }
}
