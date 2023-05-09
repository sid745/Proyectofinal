#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define FILAS 10
#define COLUMNAS 10
#define NUM_PALABRAS 2

char sopaLetras[FILAS][COLUMNAS] = {
    {'J', 'A', 'V', 'A', 'S', 'C', 'R', 'I', 'P', 'T'},
    {'C', 'H', 'A', 'R', 'A', 'C', 'T', 'E', 'R', 'S'},
    {'P', 'H', 'Y', 'T', 'O', 'N', 'B', 'N', 'Y', 'E'},
    {'R', 'R', 'R', 'R', 'R', 'R', 'E', 'C', 'T', 'A'},
    {'G', 'O', 'L', 'A', 'N', 'G', 'U', 'L', 'L', 'E'},
    {'L', 'O', 'G', 'I', 'C', 'E', 'M', 'O', 'N', 'E'},
    {'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R'},
    {'L', 'A', 'B', 'A', 'R', 'I', 'E', 'L', 'L', 'E'},
    {'S', 'T', 'A', 'C', 'K', 'O', 'V', 'E', 'R', 'F'},
    {'I', 'O', 'S', 'N', 'C', 'D', 'R', 'R', 'R', 'R'}
};

char palabras[NUM_PALABRAS][10] = {"JAVA", "PHYTON"};

void imprimirSopaLetras() {
    printf("\nSopa de letras:\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%c ", sopaLetras[i][j]);
        }
        printf("\n");
    }
}

int buscarPalabraHorizontal(char* palabra) {
    int longitudPalabra = strlen(palabra);
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j <= COLUMNAS - longitudPalabra; j++) {
            int k;
            for (k = 0; k < longitudPalabra; k++) {
                if (sopaLetras[i][j + k] != palabra[k]) {
                    break;
                }
            }
            if (k == longitudPalabra) {
                return i * 100 + j; // retorna coordenada (i,j)
            }
        }
    }
    return -1; // retorna -1 si no se encuentra la palabra
}

int buscarPalabraVertical(char* palabra) {
    int longitudPalabra = strlen(palabra);
    for (int i = 0; i <= FILAS - longitudPalabra; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            int k;
            for (k = 0; k < longitudPalabra; k++) {
                if (sopaLetras[i + k][j] != palabra[k]) {
                    break;
                }
            }
            if (k == longitudPalabra) {
                return i * 100 + j; // retorna coordenada (i,j)
            }
        }
    }
    return -1; // retorna -1 si no se encuentra la palabra
}

bool verificarGanador() {
    int palabrasEncontradas = 0;

    for (int i = 0; i < NUM_PALABRAS; i++) {
        int coordenada = buscarPalabraHorizontal(palabras[i]);
        if (coordenada != -1) {
            printf("¡Encontraste la palabra \"%s\" horizontalmente en la coordenada (%d, %d)!\n", palabras[i], coordenada / 100, coordenada % 100);
            palabrasEncontradas++;
            continue;
        }

        coordenada = buscarPalabraVertical(palabras[i]);
        if (coordenada != -1) {
            printf("¡Encontraste la palabra \"%s\" verticalmente en la coordenada (%d, %d)!\n", palabras[i], coordenada / 100, coordenada % 100);
            palabrasEncontradas++;
        }
    }

    return palabrasEncontradas == NUM_PALABRAS;
}

void jugarSopa3() {
    printf("¡Bienvenido a la Sopa de Letras!\n");
    imprimirSopaLetras();

    while (1) {
        char palabra[10];
        printf("\nIngrese una palabra para buscar (ingrese \"FIN\" para finalizar): ");
        scanf("%s", palabra);

        if (strcmp(palabra, "FIN") == 0) {
            break;
        }

        for (int i = 0; i < strlen(palabra); i++) {
            palabra[i] = toupper(palabra[i]);
        }

        int coordenada = buscarPalabraHorizontal(palabra);
        if (coordenada != -1) {
            printf("¡Encontraste la palabra \"%s\" horizontalmente en la coordenada (%d, %d)!\n", palabra, coordenada / 100, coordenada % 100);
            continue;
        }

        coordenada = buscarPalabraVertical(palabra);
        if (coordenada != -1) {
            printf("¡Encontraste la palabra \"%s\" verticalmente en la coordenada (%d, %d)!\n", palabra, coordenada / 100, coordenada % 100);
        }
    }

    if (verificarGanador()) {
        printf("\n¡Felicidades! Has encontrado todas las palabras. ¡Juego terminado!\n");
    } else {
        printf("\nAún faltan palabras por encontrar. ¡Sigue buscando!\n");
    }
}

