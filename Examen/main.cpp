#include <iostream>

using namespace std;

class Estudiante{
    private:
        string nombre,apellido,codigo;
    public:
        Estudiante(){
            nombre = ".";
            apellido = ".";
            codigo = ".";
        }
        Estudiante(string a,string b,string c){
            nombre = a;
            apellido = b;
            codigo = c;
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
        void print(){
            cout << "\n----" << nombre << "----\n" << endl;
            cout << nombre << "\n" << apellido << "\n" << codigo << endl;
        }



};

class Curso{
    private:
        string nombre,codigo;
        Estudiante *alumnos;
        int cantidadAlumnos;
    public:
        Curso(string Nombre,string Codigo,Estudiante *Alumnos, int CantAlum){
            nombre=Nombre;
            codigo=Codigo;
            cantidadAlumnos = CantAlum;
            this -> alumnos = new Estudiante[CantAlum];
            cout << alumnos << endl;
            for(int i = CantAlum-1; i >= 0 ; i--)
                alumnos[i]=*Alumnos++;
            for(int i = CantAlum-1; i >= 0 ; i--)
                *Alumnos--;
            cout << alumnos << endl;
        }
        Curso(){
            nombre = ".";
            codigo = ".";
            cantidadAlumnos = 0;
            alumnos = nullptr;
        }
        Curso(Curso &a){
            nombre=a.nombre;
            codigo=a.codigo;
            cantidadAlumnos = a.cantidadAlumnos;
            this -> alumnos = new Estudiante[a.cantidadAlumnos];
            for(int i = a.cantidadAlumnos-1; i >= 0 ; i--)
                alumnos[i]=*a.alumnos++;
            int aux = a.cantidadAlumnos;
            while(aux--)
                *a.alumnos--;
        }
       ~Curso(){
            delete alumnos;
        }
        //funciones get
        string getNombre(){
            return nombre;
        }
        string getCodigo(){
            return codigo;
        }
        int getCantidad(){
            return cantidadAlumnos;
        }
        Estudiante *getEstudiantes(){
            return alumnos;
        }
        //funcion set
        void setNombre(string a){
            this -> nombre = a;
        }
        void setCodigo(string a){
            this -> codigo = a;
        }
        void setCantidad(int a){
            cantidadAlumnos = a;
            Estudiante *aux = new Estudiante [cantidadAlumnos];
            for(int i = cantidadAlumnos-2; i >= 0 ; i--)
                aux[i]=*alumnos++;
            delete alumnos;
            this -> alumnos = new Estudiante[cantidadAlumnos];
            for(int i = cantidadAlumnos-1; i >= 0 ; i--)
                alumnos[i]=*aux++;
        }
        void setEstudiantes(Estudiante *a,int Cantidad){
            cantidadAlumnos = Cantidad;
            delete alumnos;
            this -> alumnos = new Estudiante [Cantidad];
            for (int i = Cantidad-1; i >=0 ;i--)
                alumnos[i]=*a++;
        }

        void incrementarCantidad(){
            cantidadAlumnos++;
            Estudiante *aux = new Estudiante [cantidadAlumnos];
            for(int i = cantidadAlumnos-2; i >= 0 ; i--)
                aux[i]=*alumnos++;
            delete alumnos;
            this -> alumnos= new Estudiante[cantidadAlumnos];
            for(int i = cantidadAlumnos-1; i >= 0 ; i--)
                alumnos[i]=*aux++;

        }
        void print(){
            cout << "-----" << nombre << "-----\n" << endl;
            cout << "\Codigo: " << codigo <<  endl;
            int n = cantidadAlumnos-1;
            while(n>=0)
                alumnos[n--].print();
        }
};
int main()
{
    cout << "Examen 2." << endl;
    cout << "a) Estudiante " << endl;
    cout << "Declarando dos estudiantes con argumentos" << endl;
    Estudiante Frank("Frank","Smith","123321");
    Estudiante Johan("Johan","Rouchet","123123");
    Frank.print();
    Johan.print();
    cout << "Declarando un estudiante sin argumentos" << endl;
    Estudiante Alita;
    Alita.print();
    cout << "Sea el Estudiante Frank:" << endl;
    cout << "Su nombre es: ";
    cout << Frank.getNombre() << endl;
    cout << "Su apellido es: ";
    cout << Frank.getApellido() << endl;
    cout << "Su codigo es: ";
    cout << Frank.getCodigo() << endl;
    cout << "\nb) Curso \n" << endl;
    cout << "\nDeclarando un curso con argumentos\n" << endl;
    Estudiante a[2]={Frank,Johan};
    Curso Fisica("Fisica","234",a,2);
    Fisica.print();
    cout << "\nDeclarando un curso sin argumentos\n" << endl;
    Curso Matematica;
    Matematica.print();
    cout << "\nDeclarando un curso por medio del constructor copia\n" << endl;
    Curso Quimica = Fisica;
    Quimica.print();
    cout << "\nSea el curso Fisica: "<< endl;
    cout << "\nSu nombre es: ";
    cout << Fisica.getNombre() << endl;
    cout << "\nSu codigo: ";
    cout << Fisica.getCodigo() << endl;
    cout << "\nSus alumnos: ";
    Estudiante *aux = Fisica.getEstudiantes();
    aux[0].print();
    aux[1].print();
    cout << "\nCambiando su nombre:\n" << endl;
    Fisica.setNombre("Biologia");
    Fisica.print();
    cout << "\nCambiando su codigo:\n" << endl;
    Fisica.setCodigo("321");
    Fisica.print();
    cout << "\nCambiando sus alumnos:\n"<< endl;
    Estudiante b[3]={Johan,Alita,Frank};
    Fisica.setEstudiantes(b,3);
    Fisica.print();
    cout << "\nCambiando la cantidad de alumnos\n"<<endl;
    Fisica.setCantidad(4);
    Fisica.print();
    cout <<"\nAumentando en 1 su tamaño\n"<< endl;
    Fisica.incrementarCantidad();
    Fisica.print();


    return 0;
}
