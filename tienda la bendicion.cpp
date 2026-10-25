

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
using namespace std;

int main() {
    double precio = 0;
    double subtotal = 0;
    double subtotal_venta = 0;
    double descuento = 0;
    double descuento_venta = 0;
    double iva = 0;
    double total = 0;
    double pago = 0;
    double cambio = 0;
    double total_vendido = 0;

    string producto;

    int cantidad_productos = 0;
    int cantidad = 0;
    int opciones_tablero = 0;
    int cantidad_ventas = 0;

    cout << fixed << setprecision(2);

    while (opciones_tablero != 3) {
        cout << "\n===== TIENDITA LA BENDICON =====" << endl;
        cout << "1. Registrar venta" << endl;
        cout << "2. Ver resumen de ventas" << endl;
        cout << "3. Cerrar caja y salir" << endl;
        cout << "Seleccione una opcion: ";

        if (!(cin >> opciones_tablero)) {
            cout << "Error: debe ingresar un numero." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (opciones_tablero == 1) {
            subtotal_venta = 0;
            descuento_venta = 0;
            cantidad_productos = 0;

            while (true) {
                cout << "\nIngrese el nombre del producto: ";
                cin >> ws;
                getline(cin, producto);

                if (producto == "") {
                    cout << "Debe ingresar un producto." << endl;
                    continue;
                }

                cout << "Ingrese el precio unitario (0 para terminar): ";

                if (!(cin >> precio)) {
                    cout << "Error: ingrese un precio numerico." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }

                if (precio < 0) {
                    cout << "Precio invalido. No puede ser negativo." << endl;
                    continue;
                }

                if (precio == 0) {
                    break;
                }

                cout << "Ingrese la cantidad (1 a 100): ";

                if (!(cin >> cantidad)) {
                    cout << "Error: la cantidad debe ser un numero entero." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }

                if (cantidad < 1 || cantidad > 100) {
                    cout << "Cantidad invalida. Debe estar entre 1 y 100." << endl;
                    continue;
                }

                subtotal_venta = subtotal_venta + (precio * cantidad);
                cantidad_productos = cantidad_productos + 1;

                cout << "Subtotal actual: Q" << subtotal_venta << endl;
            }

            if (cantidad_productos > 0) {

                // Calcular descuento sobre el subtotal de toda la venta
                if (subtotal_venta < 100) {
                    descuento_venta = 0;
                }
                else if (subtotal_venta < 500) {
                    descuento_venta = subtotal_venta * 0.05;
                }
                else {
                    descuento_venta = subtotal_venta * 0.10;
                }

                // Calcular IVA y total a pagar
                iva = (subtotal_venta - descuento_venta) * 0.12;
                total = (subtotal_venta - descuento_venta) + iva;

                cout << "\n===== FACTURA =====" << endl;
                cout << "Productos registrados: "
                    << cantidad_productos << endl;
                cout << "Subtotal: Q" << subtotal_venta << endl;
                cout << "Descuento: Q" << descuento_venta << endl;
                cout << "Subtotal con descuento: Q"
                    << subtotal_venta - descuento_venta << endl;
                cout << "IVA (12%): Q" << iva << endl;
                cout << "TOTAL A PAGAR: Q" << total << endl;

                // Solicitar el pago del cliente
                while (true) {
                    cout << "\nIngrese el pago del cliente: Q";

                    if (!(cin >> pago)) {
                        cout << "Error: ingrese una cantidad numerica." << endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        continue;
                    }

                    if (pago < 0) {
                        cout << "El pago no puede ser negativo." << endl;
                        continue;
                    }

                    if (pago < total) {
                        cout << "Pago insuficiente. Faltan Q"
                            << total - pago << endl;
                        continue;
                    }

                    break;
                }

                cambio = pago - total;

                // Mostrar factura final
                cout << "\n===== FACTURA FINAL =====" << endl;
                cout << "Productos registrados: "
                    << cantidad_productos << endl;
                cout << "Subtotal: Q" << subtotal_venta << endl;
                cout << "Descuento: Q" << descuento_venta << endl;
                cout << "IVA (12%): Q" << iva << endl;
                cout << "Total a pagar: Q" << total << endl;
                cout << "Pago del cliente: Q" << pago << endl;
                cout << "Cambio: Q" << cambio << endl;
                cout << "Gracias por su compra." << endl;

                // Actualizar resumen del dia
                subtotal = subtotal + subtotal_venta;
                total_vendido = total_vendido + total;
                cantidad_ventas = cantidad_ventas + 1;
            }
            else {
                cout << "No se registro ningun producto." << endl;
            }
        }
        else if (opciones_tablero == 2) {
            cout << "\n===== RESUMEN DEL DIA =====" << endl;

            if (cantidad_ventas > 0) {
                cout << "Ventas realizadas: " << cantidad_ventas << endl;
                cout << "Subtotal acumulado: Q" << subtotal << endl;
                cout << "Total vendido (con IVA y descuentos): Q"
                    << total_vendido << endl;
            }
            else {
                cout << "Todavia no se han registrado ventas." << endl;
            }
        }
        else if (opciones_tablero == 3) {
            cout << "Cerrando caja..." << endl;
            cout << "Total vendido durante el dia: Q"
                << total_vendido << endl;
        }
        else {
            cout << "Opcion no valida. Intente de nuevo." << endl;
        }
    }

    return 0;
}

