#ifndef __figura_
#define __figura_

#include "dibujable.h"

using namespace std;

class Figura : public virtual Dibujable{
private:
	int pollas;
public:
	void metododefigura(){cout<<"Figura puede tener sus propios métodos"<<endl;}
	void dibujar(int grosor, bool ajedrez){
		cout<<"Estoy dibujando la figura."<<endl;
	}
};

#endif