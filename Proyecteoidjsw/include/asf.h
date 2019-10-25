#ifndef ASF_H
#define ASF_H


class asf
{
    public:
        asf();
        asf(int,int,int);
        ~asf();
        friend class asd;

        //set function
        void seta(int);
        void setb(int);
        void setc(int);

        //get function
        int geta();
        int getb();
        int getc();

        //utility function
        void print();


    protected:

    private:
        int a,b,c;
};

#endif // ASF_H
