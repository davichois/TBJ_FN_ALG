#include <iostream>
#include <string>

int main() {

    int opcion;
    do {
        std::cout << "Menú de opciones:" << std::endl;
        std::cout << "1. Recepcion de materia prima" << std::endl;
        std::cout << "2. Mecanizado" << std::endl;
        std::cout << "3. Fundicion" << std::endl;
        std::cout << "4. Emsablaje" << std::endl;
        std::cout << "5. Tiempo de Ciclo de Ensamblaje" << std::endl;
        std::cout << "6. Tasa de Retrabajo de Mecanizado" << std::endl;
        std::cout << "7. Eficiencia de Fundición" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "Ingrese una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                // Declaracion de variables
                std::string tipoMaterial, proveedor;
                int cantidad;
                bool conformidad;

                // Solicitar al usuario ingresar información de la entrega de materias primas
                std::cout << "Ingrese el tipo de material recibido (metales, aleaciones, etc.): ";
                std::cin >> tipoMaterial;

                std::cout << "Ingrese la cantidad recibida: ";
                std::cin >> cantidad;

                std::cout << "Ingrese el nombre del proveedor: ";
                std::cin.ignore(); // Limpia el buffer de entrada
                std::getline(std::cin, proveedor);

                // Realizar inspección de calidad simulada (asumimos que la conformidad se establece por el usuario)
                std::string respuesta;
                std::cout << "¿La entrega cumple con las especificaciones de calidad? (Sí/No): ";
                std::cin >> respuesta;

                conformidad = (respuesta == "Sí" || respuesta == "Si" || respuesta == "sí" || respuesta == "si");

                // Almacenar información en el sistema de inventarios
                if (conformidad) {
                    // Registrar la entrega en el sistema de inventarios
                    std::cout << "Entrega de " << cantidad << " de " << tipoMaterial
                              << " registrada correctamente en el sistema." << std::endl;
                    // Aquí se llevaría a cabo el proceso de almacenamiento, trazabilidad, etc.
                } else {
                    std::cout
                            << "La entrega no cumple con las especificaciones de calidad. Comunicarse con el proveedor para resolver el problema."
                            << std::endl;
                }
                break;
            }
            case 2: {
                // Declaracion de variables
                std::string tipoMaterial, calidad;
                double temperatura, tiempoMecanizado;
                int lingotes, piezasMecanizadas = 0;

                // Solicitar al usuario ingresar información sobre el mecanizado
                std::cout << "Ingrese el tipo de material (lingote) a mecanizar: ";
                std::cin >> tipoMaterial;

                std::cout << "Ingrese datos sobre la calidad de la pieza a fabricar: ";
                std::cin.ignore();
                std::getline(std::cin, calidad);

                std::cout << "Ingrese la temperatura de mecanizado (en grados Celsius): ";
                std::cin >> temperatura;

                std::cout << "Ingrese el tiempo de mecanizado (en minutos): ";
                std::cin >> tiempoMecanizado;

                // Simulación del proceso de mecanizado
                std::cout << "Iniciando proceso de mecanizado de " << tipoMaterial << "...\n";

                // Sujeción de la pieza (lingote)
                std::cout << "Sujetando el lingote en la máquina herramienta...\n";

                // Programación de la máquina y configuración
                std::cout << "Programando la máquina herramienta para las operaciones necesarias...\n";

                // Operaciones de mecanizado
                while (tiempoMecanizado > 0) {
                    std::cout << "Realizando operaciones de mecanizado en el lingote a " << temperatura << "°C...\n";
                    tiempoMecanizado -= 1;
                    piezasMecanizadas += 1;
                }

                // Control de calidad en tiempo real
                std::cout << "Verificando la calidad y tolerancias en tiempo real...\n";

                // Enfriamiento y lubricación
                std::cout << "Aplicando líquido refrigerante y aceite lubricante...\n";

                // Inspección final
                std::cout << "Realizando inspección final de las piezas mecanizadas...\n";

                // Registro de datos de producción
                std::cout << "Registro de datos de producción:\n";
                std::cout << "Tipo de material (lingote): " << tipoMaterial << "\n";
                std::cout << "Temperatura de mecanizado: " << temperatura << "°C\n";
                std::cout << "Tiempo de mecanizado: " << tiempoMecanizado << " minutos\n";
                std::cout << "Calidad de las piezas fabricadas: " << calidad << "\n";
                std::cout << "Total de piezas mecanizadas: " << piezasMecanizadas << "\n";

                // Almacenamiento o envío de las piezas mecanizadas a la siguiente etapa del proceso
                std::cout << "Proceso de mecanizado completado.\n";
                break;
            }
            case 3: {
                // Declaracion de variables
                std::string tipoMaterial, calidad;
                double temperatura, tiempoFundicion, metalFundido;
                int lingotes = 0;

                // Solicitar al usuario ingresar información sobre la fundición
                std::cout << "Ingrese el tipo de material a fundir (por ejemplo, hierro, aluminio, etc.): ";
                std::cin.ignore();
                std::getline(std::cin, tipoMaterial);

                std::cout << "Ingrese la temperatura de fundición (en grados Celsius): ";
                std::cin >> temperatura;

                std::cout << "Ingrese el tiempo de fundición (en minutos): ";
                std::cin >> tiempoFundicion;

                std::cout << "Ingrese datos sobre la calidad de la fundición: ";
                std::cin.ignore();
                std::getline(std::cin, calidad);

                // Simulación de la fusión de las materias primas
                std::cout << "Iniciando proceso de fundición de " << tipoMaterial << "...\n";

                // Simulación de la fusión
                metalFundido = temperatura; // Supongamos que la temperatura de fundición se mantiene constante

                // Creación de lingotes de metal líquido
                while (tiempoFundicion > 0) {
                    std::cout << "Creando lingote de metal líquido a " << temperatura << "°C...\n";
                    tiempoFundicion -= 1;
                    lingotes += 1;
                }

                // Solidificación y enfriamiento
                std::cout << "Iniciando proceso de solidificación y enfriamiento...\n";
                std::cout << "Los lingotes de metal líquido se están enfriando y solidificando.\n";

                // Pasos posteriores a la fundición
                std::cout << "Iniciando pasos posteriores a la fundición...\n";
                std::cout << "Realizando mecanizado de los lingotes...\n";
                std::cout << "Aplicando tratamiento térmico...\n";
                std::cout << "Procesos de acabado como pulido y rectificado...\n";

                // Registro de datos de fundición
                std::cout << "Proceso de fundición y acabado completado.\n";
                std::cout << "Tipo de material: " << tipoMaterial << "\n";
                std::cout << "Temperatura de fundición: " << temperatura << "°C\n";
                std::cout << "Tiempo de fundición: " << tiempoFundicion + 1 << " minutos\n";  // Agregamos 1 para incluir el último minuto
                std::cout << "Calidad de la fundición: " << calidad << "\n";
                std::cout << "Se crearon " << lingotes << " productos finales de alta calidad.\n";
                break;
            }
            case 4: {
                // Declaracion de variables
                std::string tipoProducto, calidad;
                int componentesMecanizados, productosEnsamblados = 0;
                double tiempoEnsamblaje;

                // Solicitar al usuario ingresar información sobre el ensamblaje
                std::cout << "Ingrese el tipo de producto a ensamblar: ";
                std::cin.ignore();
                std::getline(std::cin, tipoProducto);

                std::cout << "Ingrese datos sobre la calidad del producto a ensamblar: ";
                std::cin.ignore();
                std::getline(std::cin, calidad);

                std::cout << "Ingrese la cantidad de componentes mecanizados a ensamblar: ";
                std::cin >> componentesMecanizados;

                std::cout << "Ingrese el tiempo de ensamblaje (en minutos): ";
                std::cin >> tiempoEnsamblaje;

                // Simulación del proceso de ensamblaje
                std::cout << "Iniciando proceso de ensamblaje de " << tipoProducto << "...\n";

                // Ensamblaje de componentes
                while (tiempoEnsamblaje > 0) {
                    std::cout << "Ensamblaje de componentes para fabricar " << tipoProducto << "...\n";
                    tiempoEnsamblaje -= 1;
                    productosEnsamblados += 1;
                }

                // Control de calidad en tiempo real
                std::cout << "Realizando pruebas de calidad en tiempo real para los productos ensamblados...\n";

                // Pruebas de calidad y verificaciones
                std::cout << "Realizando pruebas de calidad y verificaciones adicionales para los productos ensamblados...\n";

                // Registro de datos de ensamblaje
                std::cout << "Registro de datos de ensamblaje:\n";
                std::cout << "Tipo de producto ensamblado: " << tipoProducto << "\n";
                std::cout << "Calidad de los productos ensamblados: " << calidad << "\n";
                std::cout << "Cantidad de componentes mecanizados ensamblados: " << componentesMecanizados << "\n";
                std::cout << "Tiempo de ensamblaje: " << tiempoEnsamblaje + 1 << " minutos\n";  // Agregamos 1 para incluir el último minuto
                std::cout << "Total de productos ensamblados: " << productosEnsamblados << "\n";

                // Almacenamiento o envío de los productos ensamblados
                std::cout << "Almacenando o enviando los productos ensamblados...\n";

                // Fin del proceso de ensamblaje
                std::cout << "Proceso de ensamblaje completado.\n";
                break;
            }
            case 5: {
                // Declaracion de variables
                double totalProductos, tiempoEnsamblajeTotal, promedioTiempoEnsamblaje, maxTiempoEnsamblaje;
                std::string productoConMayorTiempo;

                // Solicitar al usuario ingresar la cantidad de productos a registrar
                std::cout << "Ingrese la cantidad de productos a registrar: ";
                std::cin >> totalProductos;

                // Inicializar variables
                tiempoEnsamblajeTotal = 0;
                maxTiempoEnsamblaje = 0;

                // Registrar información de cada producto y calcular totales
                for (int i = 1; i <= totalProductos; i++) {
                    std::string tipoProducto, calidad;
                    double tiempoEnsamblajeProducto;

                    std::cout << "Producto " << i << "\n";
                    std::cout << "Tipo de producto: ";
                    std::cin.ignore();
                    std::getline(std::cin, tipoProducto);
                    std::cout << "Calidad del producto: ";
                    std::cin.ignore();
                    std::getline(std::cin, calidad);
                    std::cout << "Tiempo de ciclo de ensamblaje (en minutos): ";
                    std::cin >> tiempoEnsamblajeProducto;

                    // Acumular los tiempos de ciclo de ensamblaje
                    tiempoEnsamblajeTotal += tiempoEnsamblajeProducto;

                    // Encontrar el producto con el tiempo de ensamblaje más largo
                    if (tiempoEnsamblajeProducto > maxTiempoEnsamblaje) {
                        maxTiempoEnsamblaje = tiempoEnsamblajeProducto;
                        productoConMayorTiempo = tipoProducto;
                    }
                }

                // Calcular el promedio del tiempo de ciclo de ensamblaje
                promedioTiempoEnsamblaje = tiempoEnsamblajeTotal / totalProductos;

                // Mostrar resultados
                std::cout << "El promedio del tiempo de ciclo de ensamblaje es: " << promedioTiempoEnsamblaje << " minutos\n";
                std::cout << "El producto con el tiempo de ensamblaje más largo es: " << productoConMayorTiempo << " con " << maxTiempoEnsamblaje << " minutos.\n";
                break;
            }
            case 6: {
                // Declaracion de variables
                int cantidadComponentesMecanizadosTotal = 0;
                int cantidadComponentesRetrabajadosTotal = 0;
                int totalProductos;

                // Solicitar al usuario ingresar la cantidad de productos a registrar
                std::cout << "Ingrese la cantidad de productos a registrar: ";
                std::cin >> totalProductos;

                // Registrar información de cada producto y calcular totales
                for (int i = 1; i <= totalProductos; i++) {
                    std::cout << "Producto " << i << "\n";
                    int cantidadComponentesMecanizados, cantidadComponentesRetrabajados;

                    std::cout << "Cantidad de componentes mecanizados: ";
                    std::cin >> cantidadComponentesMecanizados;

                    std::cout << "Cantidad de componentes retrabajados: ";
                    std::cin >> cantidadComponentesRetrabajados;

                    // Acumular los totales
                    cantidadComponentesMecanizadosTotal += cantidadComponentesMecanizados;
                    cantidadComponentesRetrabajadosTotal += cantidadComponentesRetrabajados;
                }

                // Calcular la tasa de retrabajo de mecanizado
                double tasaRetrabajoMecanizado;
                tasaRetrabajoMecanizado = (static_cast<double>(cantidadComponentesRetrabajadosTotal) / cantidadComponentesMecanizadosTotal) * 100.0;

                // Mostrar la tasa de retrabajo de mecanizado
                std::cout << "La tasa de retrabajo de mecanizado es: " << tasaRetrabajoMecanizado << "%\n";

                break;
            }
            case 7: {
                // Declaracion de variables
                double cantidadMetalLiquidoTotal = 0.0;
                double capacidadProduccionMaximaTotal = 0.0;
                int totalProductos;

                // Solicitar al usuario ingresar la cantidad de productos a registrar
                std::cout << "Ingrese la cantidad de productos a registrar: ";
                std::cin >> totalProductos;

                // Registrar información de cada producto y calcular totales
                for (int i = 1; i <= totalProductos; i++) {
                    std::cout << "Producto " << i << "\n";
                    double cantidadMetalLiquido, capacidadProduccionMaxima;

                    std::cout << "Cantidad de metal líquido producido: ";
                    std::cin >> cantidadMetalLiquido;

                    std::cout << "Capacidad de producción máxima: ";
                    std::cin >> capacidadProduccionMaxima;

                    // Acumular los totales
                    cantidadMetalLiquidoTotal += cantidadMetalLiquido;
                    capacidadProduccionMaximaTotal += capacidadProduccionMaxima;
                }

                // Calcular el promedio de eficiencia de fundición
                double eficienciaFundicion;
                eficienciaFundicion = (cantidadMetalLiquidoTotal / capacidadProduccionMaximaTotal) * 100.0;

                // Mostrar el promedio de eficiencia de fundición
                std::cout << "El promedio de eficiencia de fundición es: " << eficienciaFundicion << "%\n";
                break;
            }
            case 0:
                std::cout << "Saliendo del programa." << std::endl;
                break;
            default:
                std::cout << "Opción no válida. Inténtalo de nuevo." << std::endl;
        }
    } while (opcion != 0);

    return 0;

}
