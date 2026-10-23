#include <iostream> 
#include <string>
using namespace std;

int main() {
	double precio = 0;
	double subtotal=0;
	double descuento=0; 
	string producto;





	int opciones_tablero = 0;
		while (opciones_tablero != 3) {
			cout << "1. registrar ventas" << endl;
			cout << "2. ver resumen de ventas" << endl;
			cout << "3. cerrar tablero " << endl;
			 
			cin >> opciones_tablero;
			
			if (opciones_tablero == 1) {
				cout << "ingrese producto" << endl;
				cin.ignore();
			    getline(cin, producto);
				cout << "ingrese precio" << endl;
				cin >> precio;
				subtotal = subtotal + descuento;
				cout << "Subtotal: " << subtotal << endl;

				if (opciones_tablero == 3) {
					break;
				}

			}
			if (opciones_tablero < 1) {
				cout << "opcion no valida" << endl;
			}
			if (opciones_tablero > 3) {
				cout << "opcion no valida" << endl;

			}
			if (opciones_tablero == 2) {
				cout << (precio) << endl;
			}



			





		}

	
	
	
	
	
	
	
	
	return 0;

}

 