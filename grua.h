#ifndef __grua_
#define __grua_

#include "dibujable.h"

using namespace std;

class Grua : public virtual Dibujable{
private:
	float unpunto;
public:
	void metododegrua(){cout<<"Grua puede tener sus propios métodos."<<endl;}
	void dibujar(int grosor, bool ajedrez){
		cout<<"Estoy dibujando la grúa."<<endl;
	}
};

#endif