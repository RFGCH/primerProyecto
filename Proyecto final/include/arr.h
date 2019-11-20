#ifndef ARR_H
#define ARR_H

template<class T>
class arr
{
    public:
        arr();
        arr(T *a,int);
        ~arr();
        void insertar(T,int);
        void elimp(int);

    private:
        T *arr;
        int tam;
        void size_arr(int);
};

#endif // ARR_H
