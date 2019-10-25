#ifndef ASD_H
#define ASD_H
#include <asf.h>

class asd
{
    public:
        asd();
        asd(int,int);
        ~asd();

        //function
        void print();

        //set friend :DDDD
        void setast(& x);


    protected:

    private:
        int a,b;
};

#endif // ASD_H
