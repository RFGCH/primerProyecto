#include <iostream>
#include <asf.h>
#include <asd.h>

using namespace std;

int main()
{
    asf n(1,2,3);
    asd q(4,3);
    q.print();
    q.setast(n);
    q.print();
    return 0;
}
