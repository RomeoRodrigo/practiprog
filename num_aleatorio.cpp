#include <iostream>   // Incluye la biblioteca de entrada/salida 
// Incluye la biblioteca para funciones relacionadas con numeros aleatorios
#include <cstdlib>
// Incluye la biblioteca para obtener la hora actual como semilla para la generacion de numeros aleatorios
#include <ctime>      

using namespace std;  // Facilita el uso de cout, cin, y otros elementos de std

int main() {
	// Semilla para la generacion de numeros aleatorios
	srand(time(0));
	
	// Solicita al usuario la cantidad de numeros aleatorios a generar
	cout << "Ingrese la cantidad de numeros aleatorios a generar: ";
	int N;
	cin >> N;  // Lee la cantidad ingresada por el usuario
	
	// Imprime N numeros aleatorios entre 0 y 99
	cout << "Numeros aleatorios generados:"<<endl;
	for (int i = 0; i < N; ++i) {
		// Utiliza la funcion rand() para generar un numero aleatorio entre 0 y 99
		int numeroAleatorio = rand() % 100;
		
		// Imprime cada numero aleatorio
		cout << numeroAleatorio << " ";
	}
	
	return 0;  // Indica que el programa finalizara correctamente
}
