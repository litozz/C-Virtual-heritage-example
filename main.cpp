#include "figura.h"
#include "grua.h"
//#include "dibujable.h"
#include <vector>

using namespace std;

int main(){
	vector<Dibujable*> dibujables;

	Figura figura=Figura();
	Grua grua=Grua();

	dibujables.push_back(&figura);
	dibujables.push_back(&grua);

	for(int i=0;i<dibujables.size();i++)
		dibujables[i]->dibujar(3,true);

	cout<<"Eso es todo."<<endl;
}