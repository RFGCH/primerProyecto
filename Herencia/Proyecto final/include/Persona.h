#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
using namespace std;

class Persona
{
    public:

        Persona(string,string);

    protected:
        string nombre,pass;

        void setnombre(string);
        void setpass(string);
        string getnombre();
        string getpass();

    private:
};

#endif // PERSONA_H
