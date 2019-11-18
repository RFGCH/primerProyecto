#ifndef MENU_H
#define MENU_H
#include <string>
using namespace std;

class menu
{
    public:
        menu();
        ~menu();

        string registro();
        void registrarse();
        void editar();
        void print();
        void eliminar();

    protected:

    private:
};

#endif // MENU_H
