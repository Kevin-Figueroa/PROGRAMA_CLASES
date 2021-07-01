#include <iostream>
#include <stdlib.h>

using namespace std;

class Persona {
private: // atributos
	int edad;
	string nombre;
public: //metodos
	Persona::Persona(int, std::string);//contructor
	void leer();
	void correr();
};
//constructor nos sirve para inicializar los atributos
Persona::Persona(int _edad, string _nombre) {
	edad = _edad;
	nombre = _nombre;
}

void Persona::leer() {
	cout << "Soy" << nombre << "y estoy leyendo un libro" << endl;
}
void Persona::correr() {
	cout << "Soy" << nombre << "y estoy corriendo una maraton y tengo" << edad << endl;
}
int main() {
	Persona p1 = Persona(21, "Kevin");
	Persona p2 = Persona(21, "Humberto");
	p1.leer();
	p2.correr();
	system("pause");
	return 0;
}