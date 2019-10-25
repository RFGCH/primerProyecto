#include "asd.h"
#include <iostream>
using namespace std;

asd::asd()
    :a(0),b(0)
{
}

asd::asd(int c,int d)
    :a(c),b(d)
{
}

asd::~asd()
{
    a = b;
}
void asd::print(){
    cout << a << " " << b << " " << endl;
}

void asd::setast(asf& x){
    this -> a = x.a;
    this -> b = x.b;
}
