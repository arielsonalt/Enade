#ifndef ENADE_H
#define ENADE_H
#include <string>
using namespace std;

class Enade
{
    private:
        string ano;
        string codigoArea;
        string areaAvaliacao;
        string codigoIes;
        string nomeIes;
        string siglaIes;
        string organizacaoAcademica;
        string categoriaAdministrativa;
        string codigoCurso;
        string modalidadeEnsino;
        string codigoMunicipio;
        string municipioCurso;
        string siglaUf;
        string numeroConcluintesInscritos;
        string numeroConcluintesParticipantes;
        string notaBrutaFg;
        string notaPadronizadaFg;
        string notaBrutaCe;
        string notaPadronizadaCe;
        string conceitoEnadeContinuo;
        string conceitoEnadeFaixa;
    public:
        Enade();
        string getAno();
        string getCodigoArea();
        string getAreaAvaliacao();
        string getCodigoIes();
        string getNomeIes();
        string getSiglaIes();
        string getOrganizacaoAcademica();
        string getCategoriaAdministrativa();
        string getCodigoCurso();
        string getModalidadeEnsino();
        string getCodigoMunicipio();
        string getMunicipioCurso();
        string getSiglaUf();
        string getNumeroConcluintesInscritos();
        string getNumeroConcluintesParticipantes();
        string getNotaBrutaFg();
        string getNotaPadronizadaFg();
        string getNotaBrutaCe();
        string getNotaPadronizadaCe();
        string getConceitoEnadeContinuo();
        string getConceitoEnadeFaixa();

        void setAno(string);
        void setCodigoArea(string);
        void setAreaAvaliacao(string);
        void setCodigoIes(string);
        void setNomeIes(string);
        void setSiglaIes(string);
        void setOrganizacaoAcademica(string);
        void setCategoriaAdministrativa(string);
        void setCodigoCurso(string);
        void setModalidadeEnsino(string);
        void setCodigoMunicipio(string);
        void setMunicipioCurso(string);
        void setSiglaUf(string);
        void setNumeroConcluintesInscritos(string);
        void setNumeroConcluintesParticipantes(string);
        void setNotaBrutaFg(string);
        void setNotaPadronizadaFg(string);
        void setNotaBrutaCe(string);
        void setNotaPadronizadaCe(string);
        void setConceitoEnadeContinuo(string);
        void setConceitoEnadeFaixa(string);


};

#endif // ENADE_H
