# Pseudocódigo: Sistema de Caja para la Tiendita La Bendición

**Inicio**

    Definir precio, subtotal, subtotal_venta, descuento_venta Como Real
    Definir iva, total, pago, cambio, total_vendido Como Real
    Definir producto Como Cadena
    Definir cantidad_productos, cantidad, opciones_tablero, cantidad_ventas Como Entero

    Inicializar todas las variables numéricas en 0

    Mientras opciones_tablero sea diferente de 3 Hacer

        Escribir "===== TIENDITA LA BENDICIÓN ====="
        Escribir "1. Registrar venta"
        Escribir "2. Ver resumen de ventas"
        Escribir "3. Cerrar caja y salir"
        Leer opciones_tablero

        Si la opción ingresada no es numérica Entonces
            Mostrar "Error: debe ingresar un número"
            Limpiar entrada inválida

        Sino

            Si opciones_tablero = 1 Entonces

                subtotal_venta = 0
                descuento_venta = 0
                cantidad_productos = 0

                Repetir

                    Escribir "Ingrese el nombre del producto"
                    Leer producto

                    Mientras producto esté vacío Hacer
                        Mostrar "Debe ingresar un producto"
                        Leer producto
                    FinMientras

                    Escribir "Ingrese el precio unitario (0 para terminar)"
                    Leer precio

                    Mientras el precio no sea numérico Hacer
                        Mostrar "Error: ingrese un precio numérico"
                        Leer precio
                    FinMientras

                    Si precio es menor que 0 Entonces
                        Mostrar "Precio inválido. No puede ser negativo"

                    Sino

                        Si precio es mayor que 0 Entonces

                            Escribir "Ingrese la cantidad (1 a 100)"
                            Leer cantidad

                            Mientras la cantidad no sea un entero válido Hacer
                                Mostrar "Error: la cantidad debe ser un número entero"
                                Leer cantidad
                            FinMientras

                            Si cantidad es menor que 1 O cantidad es mayor que 100 Entonces
                                Mostrar "Cantidad inválida"

                            Sino
                                subtotal_venta = subtotal_venta + (precio * cantidad)
                                cantidad_productos = cantidad_productos + 1

                                Mostrar "Subtotal actual: ", subtotal_venta
                            FinSi

                        FinSi

                    FinSi

                Hasta Que precio = 0

                Si cantidad_productos > 0 Entonces

                    Si subtotal_venta < 100 Entonces
                        descuento_venta = 0
                    Sino
                        Si subtotal_venta < 500 Entonces
                            descuento_venta = subtotal_venta * 0.05
                        Sino
                            descuento_venta = subtotal_venta * 0.10
                        FinSi
                    FinSi

                    iva = (subtotal_venta - descuento_venta) * 0.12
                    total = (subtotal_venta - descuento_venta) + iva

                    Mostrar "===== FACTURA ====="
                    Mostrar "Productos registrados: ", cantidad_productos
                    Mostrar "Subtotal: Q", subtotal_venta
                    Mostrar "Descuento: Q", descuento_venta
                    Mostrar "Subtotal con descuento: Q", subtotal_venta - descuento_venta
                    Mostrar "IVA (12%): Q", iva
                    Mostrar "TOTAL A PAGAR: Q", total

                    Repetir
                        Escribir "Ingrese el pago del cliente"
                        Leer pago

                        Si pago < 0 Entonces
                            Mostrar "El pago no puede ser negativo"
                        Sino
                            Si pago < total Entonces
                                Mostrar "Pago insuficiente. Faltan Q", total - pago
                            FinSi
                        FinSi

                    Hasta Que pago >= total

                    cambio = pago - total

                    Mostrar "===== FACTURA FINAL ====="
                    Mostrar "Subtotal: Q", subtotal_venta
                    Mostrar "Descuento: Q", descuento_venta
                    Mostrar "IVA (12%): Q", iva
                    Mostrar "Total a pagar: Q", total
                    Mostrar "Pago del cliente: Q", pago
                    Mostrar "Cambio: Q", cambio
                    Mostrar "Gracias por su compra"

                    subtotal = subtotal + subtotal_venta
                    total_vendido = total_vendido + total
                    cantidad_ventas = cantidad_ventas + 1

                Sino
                    Mostrar "No se registró ningún producto"
                FinSi

            Sino
                Si opciones_tablero = 2 Entonces

                    Mostrar "===== RESUMEN DEL DÍA ====="

                    Si cantidad_ventas > 0 Entonces
                        Mostrar "Ventas realizadas: ", cantidad_ventas
                        Mostrar "Subtotal acumulado: Q", subtotal
                        Mostrar "Total vendido: Q", total_vendido
                    Sino
                        Mostrar "Todavía no se han registrado ventas"
                    FinSi

                Sino
                    Si opciones_tablero = 3 Entonces
                        Mostrar "Cerrando caja..."
                        Mostrar "Total vendido durante el día: Q", total_vendido
                    Sino
                        Mostrar "Opción no válida. Intente de nuevo"
                    FinSi
                FinSi
            FinSi

        FinSi

    FinMientras

Fin