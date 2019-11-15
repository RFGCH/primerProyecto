#ifndef REGISTRO_H
#define REGISTRO_H
#include <string>

using namespace std;

class registro
{
    public:
        registro();
        ~registro();

        //funciones
        void editar();
        void print();
        void eliminar();
        void maquinas();

    protected:

    private:
        string nick;
};

#endif // REGISTRO_H
