#include <iostream>
#include <cstdlib> // Necesario para system()

int main() {
   int finish=0;
    do{
	int opcion=0;
	
    std::cout << "Selecciona un programa para ejecutar:" << std::endl;
    std::cout << "1. Ejecutar evaluacion" << std::endl;
    std::cout << "2. Ejecutar carga " << std::endl;
    std::cout << "3. Ejecutar descarga " << std::endl;
    std::cout << "4. Proponer planeacion orientada a matematicas para 4 grado de primaria" << std::endl;
    std::cout << "5. Proponer planeacion orientada a espanol para 4 grado de primaria" << std::endl;
    std::cout << "Ingrese su opcion (1-5): ";
    std::cin >> opcion;std::cout<<std::endl;

	
		switch (opcion) {
        case 1:
            system( "C:/Users/Aliky/Desktop/hackaton/nuevoproyecto/index.html"); // Reemplaza con la ruta del programa 1
            break;
        case 2:
            system( "C:/Users/Aliky/Desktop/hackaton/nuevoproyecto/subida.exe"); // Reemplaza con la ruta del programa 1
            break;
            break;
        case 3:
            system( "C:/Users/Aliky/Desktop/hackaton/nuevoproyecto/descargar.exe"); // Reemplaza con la ruta del programa 1
            break;
            	
        case 4:
        	system( "C:/Users/Aliky/Desktop/hackaton/nuevoproyecto/matematicas.exe"); // Reemplaza con la ruta del programa 1
            break;
            
        case 5:
        	system( "C:/Users/Aliky/Desktop/hackaton/nuevoproyecto/espanol.exe"); // Reemplaza con la ruta del programa 1
            break;
            
        default:
            std::cout << "Opcion no valida." << std::endl;
           
    }
std::cout <<std::endl;
std::cout << "desea realizar alguna otra accion? 1=si, 0=no: " << std::endl;std::cin>>finish;

	}while(finish!=0);
    

  
 
}