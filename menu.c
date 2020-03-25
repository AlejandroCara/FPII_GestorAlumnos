#include <stdio.h>

int showMenu() {

	int option = 0;

	printf("Seleccione una opción: \n");
	printf(" 1. Añadir alumno \n");
	printf(" 2. Buscar por DNI \n");
	printf(" 3. Buscar por nombre \n");
	printf(" 4. Ver último alumno buscado \n");
	printf(" 5. Eliminar último alumno buscado \n");
	printf(" 0. Salir \n\n\n");
	printf("Opción: ");

	scanf_s("%d", &option);

	return option;
}