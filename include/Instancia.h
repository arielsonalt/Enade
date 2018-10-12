#ifndef INSTANCIA_H
#define INSTANCIA_H
#include "../include/Enade.h"
#include <vector>
#include <string>
using namespace std;


class Instancia
{
    private:
        vector <Enade> instancias;
    public:
        Instancia();
        void readData();
        void setInstancias(Enade);
        vector <Enade> getInstancias();
        void solucao();


};

#endif // INSTANCIA_H
