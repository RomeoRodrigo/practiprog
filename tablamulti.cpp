#include <iostream>  // Incluye la biblioteca de entrada y salida

using namespace std;  // Facilita el uso de cout, cin, y otros elementos de std

int main() {
	// Solicita al usuario que ingrese un numero
	cout << "Ingrese un numero para mostrar la tabla de multiplicar: ";
	int numero;
	cin >> numero;  // Lee el numero ingresado por el usuario
	
	// Imprime la tabla de multiplicar del numero ingresado en pantalla
	cout << "Tabla de multiplicar de " << numero << endl;
	
	// Aqui se utiliza un bucle for para iterar desde 1 hasta 10
	for (int i = 1; i <= 10; ++i) {
		// Imprime cada li­nea de la tabla de multiplicar con el numero ingresado por el usurio
		cout << numero << " x " << i << " = " << (numero * i) << endl;
	}
	
	return 0;  // Indica que el programa finaliza correctamente
}
