#ifndef SUPERVISOR_H
#define SUPERVISOR_H
#include <Persona.h>

class Supervisor:protected Persona
{
    public:
        Supervisor();
        virtual ~Supervisor();

    protected:

        Trabajador *Trabajadores;
        int cntTrabj;

        void aviso();

    private:
};

#endif // SUPERVISOR_H
