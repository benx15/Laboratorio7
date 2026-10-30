
#include <iostream>
using namespace std;
#include <cstdlib> // para rand() y srand()
#include <ctime> // para el uso de la hora del sistema


const int DIAS = 7;
using tVentas = int[DIAS];


void inicializarAleatoriamente(tVentas ventas);
void mostrar(const tVentas ventas);
void mayorVenta(tVentas ventas);

// incorpora aquí los prototipos de los subprogramas pedidos



int main() {
	tVentas ventas;
	INT16_MIN;

	inicializarAleatoriamente(ventas);  // inicialización aleatoria del array
	mostrar(ventas);  // visualización del contenido del array
	mayorVenta(ventas);
	cout << endl;

	// incorpora aquí código para implementar los subprogramas pedidos

	return 0;
}


/**
* Inicialización aleatoria del array con valores en el rango [0, 999]
*
* \param ventas (OUT) El array inicializado.
*/
void inicializarAleatoriamente(tVentas ventas) {
	srand(time(NULL)); // inicializa la semilla del generador de números aleatorios
	for (int i = 0; i < DIAS; i++)
		ventas[i] = rand() % 1000;  // las ventas siempre seran menores de 1000
}


/**
* Visualización de un array por pantalla
*
* \param ventas (IN) El array a mostrar.
*/
void mostrar(const tVentas ventas) {
	for (int i = 0; i < DIAS; i++)
		cout << "Venta n. " << i + 1 << ": " << ventas[i] << endl;
}

void mayorVenta(tVentas ventas) {
	for (int i = 0; i < DIAS; i++) {
		if (INT16_MIN < ventas[i])
			cout << "La venta mayor es: " << ventas[i];
	}	
	
		
}

// implementa aquí los subprogramas pedidos