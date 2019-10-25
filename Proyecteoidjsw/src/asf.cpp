#include "asf.h"
#include <iostream>

using namespace std;

asf::asf()
    :a(0),b(0),c(0)
{
}
asf::asf(int d, int e, int f)
    :a(d),b(e),c(f)
{
}

asf::~asf()
{
    cout << "asf" << endl;
}

void asf::seta(int a){
    this -> a = a;
}

void asf::setb(int b){
    this -> b = b;
}

void asf::setc(int c){
    this -> c = c;
}

int asf::geta(){
    return a;
}

int asf::getb(){
    return b;
}

int asf::getc(){
    return c;
}

void asf::print(){
    cout << a << " " << b << " " << c << endl;
}
