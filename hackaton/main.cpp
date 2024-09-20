#include <iostream>
#include <cstdlib> // Necesario para system()

int main() {
    int opcion;

    std::cout << "Selecciona un programa para ejecutar:" << std::endl;
    std::cout << "1. Ejecutar programa 1" << std::endl;
    std::cout << "2. Ejecutar programa 2" << std::endl;
    std::cout << "3. Ejecutar programa 3" << std::endl;
    std::cout << "Ingrese su opción (1-3): ";
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            system( "C:/Users/Aliky/Desktop/hackaton/nuevoproyecto/index.html"); // Reemplaza con la ruta del programa 1
            break;
        case 2:
            
            break;
        case 3:
            
            break;
            	
        default:
            std::cout << "Opción no válida." << std::endl;
            return 1;
    }

    // Ejecuta el archivo .exe seleccionado
    int resultado = system("C:/Users/Aliky/Desktop/hackaton/abrirchatgpt.exe");

    // Verifica si la ejecución fue exitosa
    if (resultado == 0) {
        std::cout << "El archivo se ejecutó correctamente." << std::endl;
    } else {
        std::cout << "Hubo un error al ejecutar el archivo." << std::endl;
    }

    
}