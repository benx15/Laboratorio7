
#include <iostream>
using namespace std;
#include <cstdlib> // para rand() y srand()
#include <ctime> // para el uso de la hora del sistema


const int DIAS = 7;
using tVentas = int[DIAS];


void inicializarAleatoriamente(tVentas ventas);
void mostrar(const tVentas ventas);
void mayorVenta(tVentas ventas);
void diaVentaMayor(tVentas ventas);
void cuantosDias(tVentas ventas);

// incorpora aquí los prototipos de los subprogramas pedidos



int main() {
	tVentas ventas;
	INT16_MIN;

	inicializarAleatoriamente(ventas);  // inicialización aleatoria del array
	mostrar(ventas);  // visualización del contenido del array
	

	cout << endl;

	// incorpora aquí código para implementar los subprogramas pedidos
	mayorVenta(ventas);
	cuantosDias(ventas);
	diaVentaMayor(ventas);
	

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
	int mayor= ventas[0];
	for (int i = 0; i < DIAS; i++) {
		if (mayor < ventas[i])
			mayor = ventas[i];
	}	
	cout << "La venta mayor es: " << mayor << endl;
}

void diaVentaMayor(tVentas ventas) {
	int umbral = 0;
	cout << "Inserte el umbral: ";
	cin >> umbral;

	int resultado = -1;  

	for (int i = 0; i < DIAS; i++) {
		if (ventas[i] > umbral) {
			resultado = i;  
		}

	}

	if (resultado == -1)
		cout << "Ningun dia supero el umbral -> -1" << endl;
	else
		cout << "El dia mas cercano al final que supero el umbral: dia " << resultado + 1 << " (indice " << resultado << ")" << endl;

}

void cuantosDias(tVentas ventas) {
	int u = 0;
	int suma = 0;
	int cont = 0;
	cout << "Inserte el umbral: ";
	cin >> u;
	bool encontrado = false;

	for (int i = 0; i < DIAS && !encontrado; i++) {
		suma = suma + ventas[i];
		cont++;
		if (suma >= u) {
			encontrado = true;  
		}

	}

	if (encontrado)
		cout << "Ha pasado: " << cont << " dias" << endl;
	else
		cout << "8" << endl;

}