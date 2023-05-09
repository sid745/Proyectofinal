#include <iostream>
#include "Sopa.cpp"
#include "ahorcado.cpp"
#include "GatoProyecto.cpp"

int main() {
    int opcion;
        system("color 25");

    while (true) {
        std::cout << "Menu de juegos:" << std::endl;
        std::cout << "1. Sopa de letras " << std::endl;
        std::cout << "2. Ahorcado" << std::endl;
        std::cout << "3. GatoProyecto" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "Ingrese el numero de opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                jugarSopa3();
                break;
            case 2:
                jugarahorcado();
                break;
            case 3:
                jugarGatoProyecto();
                break;
            case 0:
                std::cout << "Saliendo del programa..." << std::endl;
                return 0;
            default:
                std::cout << "Opción inválida. Intente nuevamente." << std::endl;
                break;
        }

        // Limpia el búfer del teclado
        while (std::cin.get() != '\n');
        std::cout << "\nPresione Enter para continuar..." << std::endl;
        std::cin.get(); // Espera a que el usuario presione Enter
        std::cout << std::endl;
    }

    return 0;
}


