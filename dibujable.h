#ifndef __dibujable_
#define __dibujable_

#include <iostream>

using namespace std;

class Dibujable{
public:
	void unMetodo(){cout<<"Este método es propio de dibujable y no es necesario que lo implementen las subclases."<<endl;}
	virtual void dibujar(int grosor, bool ajedrez){}
};

#endif