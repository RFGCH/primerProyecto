#include <iostream>

using namespace std;

class Estudiante{
    private:
        string nombre,apellido,codigo;
    public:
        Estudiante(string a,string b,string c){
            nombre = a;
            apellido = b;
            codigo = c;
        }

        Estudiante(){
            nombre = ".";
            apellido = ".";
            codigo = ".";
        }
    //funciones get
        string getNombre(){
            return nombre;
        }
        string getApellido(){
            return apellido;
        }
        string getCodigo(){
            return codigo;
        }


};

class Curso{
    private:
        string nombre,codigo;
        Estudiante *alumnos;
        int cantidadAlumnos;
    public:
        Curso(string Nombre,string Codigo,Estudiante *Alumnos, int CantidadAlumnos){
            nombre=Nombre;
            codigo=Codigo;
            cantidadAlumnos=CantidadAlumnos;
            Estudiante *alumnos= new Estudiante[CantidadAlumnos];
            *alumnos=*Alumnos;

        }
        Curso(Curso &a){
            nombre=a.nombre;
            codigo=a.codigo;
            cantidadAlumnos=a.cantidadAlumnos;
            Estudiante *alumnos= new Estudiante[a.cantidadAlumnos];
            alumnos=a.alumnos;
            }

        //funciones get

        string getNombre(){
            return nombre;
        }
        string getCodigo(){
            return codigo;
        }
        void getEstudiantes(){
        }
        int getCantidad(){
            return cantidadAlumnos;
        }

        //funcion set

        void setNombre(string a){
            nombre = a;
        }
        void setCodigo(string a){
            codigo = a;
        }
        //void setEstudiantes(Estudiante *a,Cantidad){
        //    while(cantidadAlumnos-->Cantidad){
        //        alumnos += cantidadAlumnos;
       //        delete *alumnos;
        //    }
       //     while(cantidadAlumnos++<Cantidad){
        //        alumnos += cantidadAlumnos+1;
       //         Estudiante alumnos = new Estudiante;
       //     }
       //     *alumnos = *a;
       // }
        void setCantidad(int a){
            cantidadAlumnos = a;
        }
        void incrementarCantidad(){
            alumnos+=cantidadAlumnos++;
            alumnos++;
            Estudiante *alumnos = new Estudiante;
        }
};

int main()
{
    Estudiante a[2] = [Estudiante("Johan","Ruperto","123123"), Estudiante("Joseph","Manolo","636363")];
    Curso Fisica("Fisica","121212",Ruperto,1);
    cout << "---Ruperto---"<< endl;
    cout << Ruperto.getNombre()<< endl;
    cout << Ruperto.getApellido()<< endl;
    cout << Ruperto.getCodigo()<< endl;
    cout << "---Manolo---"<< endl;
    cout << Manolo.getNombre()<< endl;
    cout << Manolo.getApellido()<< endl;
    cout << Manolo.getCodigo()<< endl;

    return 0;
}
