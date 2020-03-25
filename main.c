#include <stdio.h>
#include <locale.h>
#include <stdbool.h>



#include "menu.h"
#include "student.h"

int main() {
	
	setlocale(LC_CTYPE, "ES_ca");

	bool exit = false;

	while (!exit) {
		switch (showMenu()) {
			case 1:
				printf("Añadir alumno seleccionado. \n\n");
				break;
			case 2:
				printf("Buscar por DNI seleccionado. \n\n");
				break;
			case 3:
				printf("Buscar por nombre seleccionado. \n\n");
				break;
			case 4:
				printf("Ver último buscado seleccionado. \n\n");
				break;
			case 5:
				printf("Eliminar último buscado seleccionado. \n\n");
				break;
			case 0:
				printf("Salir");
				exit = true;
				break;
			default:
				printf("Opción no válida. \n\n");
				break;
			}
	}

	

}