# proyecto-final-de-algoritmos
Proyecto Final de Algoritmos
Sistema de Caja para la Tiendita La Bendición
1. Descripción del proyecto
El proyecto consiste en desarrollar un sistema de caja para una tienda de barrio mediante un programa de consola desarrollado en C++. Su objetivo principal es facilitar el registro de ventas, calcular los descuentos correspondientes, aplicar el Impuesto al Valor Agregado (IVA) y determinar el cambio que debe entregarse al cliente.
El programa cuenta con un menú principal que permite registrar una venta, consultar el resumen de las ventas realizadas y cerrar la caja al finalizar las operaciones.
Durante el registro de una venta, el usuario puede ingresar el nombre de cada producto, su precio unitario y la cantidad solicitada. El sistema acumula el subtotal de los productos ingresados y, al finalizar la factura, calcula el descuento según el subtotal total de la compra:
Si el subtotal es menor de Q100.00, no se aplica descuento.
Si el subtotal está entre Q100.00 y Q499.99, se aplica un descuento del 5%.
Si el subtotal es igual o superior a Q500.00, se aplica un descuento del 10%.
Después de aplicar el descuento, el sistema calcula el IVA del 12% sobre el importe restante y obtiene el total que debe pagar el cliente. También solicita el monto entregado por el cliente, valida que sea suficiente y calcula el cambio correspondiente.
Finalmente, el programa permite consultar un resumen de las ventas registradas durante la sesión y muestra el total vendido al cerrar la caja.
2. Cómo compilarlo y ejecutarlo
Para compilar y ejecutar el programa se puede utilizar Visual Studio en Windows.
Pasos para compilar y ejecutar:
Abrir Visual Studio.
Abrir el proyecto de C++ correspondiente al sistema de caja.
Abrir el archivo de código fuente con extensión .cpp.
Guardar los cambios realizados en el código.
Seleccionar la opción Compilar solución en el menú Compilar.
Verificar que la compilación finalice correctamente y que no existan errores.
Ejecutar el programa mediante la opción Iniciar sin depurar, o presionando Ctrl + F5.
Utilizar el menú de la consola para registrar ventas, consultar el resumen o cerrar la caja.
Alternativa mediante la terminal:
Si el compilador g++ está instalado y configurado en el sistema, también se puede compilar y ejecutar desde la terminal, ubicándose primero en la carpeta que contiene el archivo .cpp.
Comandos:
g++ nombre_archivo.cpp -o tiendita
Para ejecutar el programa en Windows:
.\tiendita.exe
El nombre nombre_archivo.cpp debe sustituirse por el nombre real del archivo de código fuente.
3. Estructuras de control y lógica aplicada
El programa utiliza diferentes estructuras de control y operaciones para administrar las ventas y realizar los cálculos necesarios.
a) Estructura secuencial
Se utiliza para ejecutar operaciones en un orden determinado, como calcular el subtotal, determinar el descuento, calcular el IVA, obtener el total de la compra y calcular el cambio del cliente.
b) Estructura condicional if, else if y else
Se emplea para tomar decisiones según las condiciones establecidas. Por ejemplo, determina qué porcentaje de descuento corresponde según el subtotal de la venta. También valida que los precios no sean negativos, que las cantidades estén entre 1 y 100 y que el pago del cliente sea suficiente.
c) Ciclo while
Se utiliza para mantener activo el menú principal hasta que el usuario seleccione la opción de cerrar la caja. También permite repetir el ingreso de productos y solicitar nuevamente el pago cuando el monto recibido sea insuficiente.
d) Ciclo while (true)
Se utiliza para repetir el registro de productos hasta que el usuario introduzca el precio cero, indicando que ha terminado de ingresar los productos de la factura.
e) Acumuladores
Se utilizan variables como subtotal_venta, subtotal y total_vendido para sumar los importes correspondientes. Esto permite calcular el subtotal de cada factura y conservar los totales acumulados durante la sesión sin utilizar arreglos ni listas.
f) Validación de datos
El programa verifica que los datos ingresados sean válidos. Cuando se introduce un dato no numérico en los campos numéricos, se utiliza cin.clear() para restablecer el estado de entrada y cin.ignore() para descartar los caracteres inválidos. Además, se comprueban los límites de precios, cantidades y pagos.
g) Cálculos aritméticos
Se utilizan operaciones de suma, resta y multiplicación para calcular el subtotal, el descuento, el IVA, el total a pagar y el cambio. El descuento se determina sobre el subtotal completo de la factura y el IVA se calcula después de aplicar dicho descuento.
4. Uso de la inteligencia artificial
Durante el desarrollo del proyecto se utilizó ChatGPT como herramienta de apoyo para resolver dudas sobre programación en C++, comprender el funcionamiento de ciertos comandos y corregir errores durante la ejecución del programa.
Algunas de las preguntas realizadas fueron:
¿Cómo ejecuto mi programa?
¿Cómo puedo poner esas dos opciones?
¿Cómo puedo hacer que al ingresar el nombre del producto, si ingresan números, muestre un texto de error?
¿Cómo puedo hacer para que se pueda poner espacios en el nombre del producto?
¿Por qué me aparece «Ingrese producto» y «Ingrese precio» de corrido?
¿Qué características debería tener mi código?
¿Cómo funciona cin.clear() y cin.ignore() para validar entradas?
¿Cuál es la extensión de una carpeta?
La inteligencia artificial se utilizó como recurso de consulta para comprender los comandos, solucionar dificultades y mejorar progresivamente el programa. Su uso complementó el proceso de aprendizaje y permitió trabajar en la implementación de las funcionalidades solicitadas.

5. casos de prueba
venta de Q99.99 sin decuento
![caso 1](caso1.png)
venta de Q500
![caso2](caso2.png)
cantidad 0 y cantidad 101 precion negativo y opcion de menu invalido
![caso3](caso3.png)
sin ventas registradas
![caso4](caso4.png)
pago menor al total
![caso5](caso5.png)
