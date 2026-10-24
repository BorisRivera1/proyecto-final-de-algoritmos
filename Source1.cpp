
#include <iostream>
#include <string>
	using namespace std;

	int main() {
		double precio = 0;
		double subtotal = 0;
		double descuento = 0;

		string producto;

		string producto1 = "";
		string producto2 = "";
		string producto3 = "";

		double precio1 = 0;
		double precio2 = 0;
		double precio3 = 0;

		int cantidad_productos = 0;
		int opciones_tablero = 0;


		while (opciones_tablero != 3) {
			cout << "1. registrar ventas" << endl;
			cout << "2. ver resumen de ventas" << endl;
			cout << "3. cerrar tablero " << endl;
			 
			cin >> opciones_tablero;

			//1.ingresar producto. opciones de el tablero 
			
			if (opciones_tablero == 1) {
				cout << "ingrese producto" << endl;
				cin.ignore();
			    getline(cin, producto);

				if (producto == "") {
					cout << "Debe ingresar un producto" << endl;
				}
				else {
					cout << "ingrese precio" << endl;
					cin >> precio;
					if (precio <= 0) {
						cout << "precio invalido" << endl;
					}
					else {
						if (cantidad_productos == 0) {
							producto1 = producto;
							precio1 = precio;
							cantidad_productos = cantidad_productos + 1;
						}

						else if (cantidad_productos == 1) {
							producto2 = producto;
							precio2 = precio;
							cantidad_productos = cantidad_productos + 1;
						}


						subtotal = subtotal + precio;
						cout << "Subtotal: " << subtotal << endl;
					
					}
				}

			
					
				
					
			}
			if (opciones_tablero < 1) {
				cout << "opcion no valida" << endl;
			}
			if (opciones_tablero > 3) {
				cout << "opcion no valida" << endl;

				//2. Resumen de ventas. opcines del tablero
			}

			if (opciones_tablero == 2) {
				cout << "Resumen de ventas" << endl;

				if (cantidad_productos >= 1) {
					cout << "Producto 1: " << producto1
						<< " - Q" << precio1 << endl;
				}

				if (cantidad_productos >= 2) {
					cout << "Producto 2: " << producto2
						<< " - Q" << precio2 << endl;
				}

				if (cantidad_productos >= 3) {
					cout << "Producto 3: " << producto3
						<< " - Q" << precio3 << endl;
				}

				cout << "Subtotal acumulado: Q" << subtotal << endl;
			}

			

			



			





		}

	
	
	
	
	
	
	
	
	return 0;

}

 