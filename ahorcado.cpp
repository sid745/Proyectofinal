#include <stdio.h>
#include <string.h>
#define MAX_LEN 100



void jugarahorcado() {
    char palabra_secreta[MAX_LEN], letra_ingresada;
    int vidas_restantes = 6, longitud_palabra_secreta, letras_correctas = 0;
    int i, acertado, ganador = 0;
    int letras_usadas[26] = {0};
	printf("Bienvenido");
    //  Lógica del juego
     printf("Jugador 1, ingrese la palabra secreta: ");
    scanf("%s", palabra_secreta);

    longitud_palabra_secreta = strlen(palabra_secreta);

    printf("Jugador 2, la palabra secreta tiene %d letras:\n", longitud_palabra_secreta);
    for (i = 0; i < longitud_palabra_secreta; i++) {
        printf("_ ");
    }
    printf("\n\n");

    while (vidas_restantes > 0 && ganador == 0) {
        acertado = 0;

        printf("Jugador 2, ingrese una letra: ");
        scanf(" %c", &letra_ingresada);

        if (letras_usadas[letra_ingresada - 'a'] == 1) {
            printf("Ya ingresaste la letra '%c', intenta con otra.\n\n", letra_ingresada);
            continue;
        }

        letras_usadas[letra_ingresada - 'a'] = 1;

        for (i = 0; i < longitud_palabra_secreta; i++) {
            if (palabra_secreta[i] == letra_ingresada) {
                letras_correctas++;
                acertado = 1;
            }
        }

        if (acertado) {
            printf("¡Correcto! La letra '%c' está en la palabra.\n\n", letra_ingresada);
        } else {
            vidas_restantes--;
            printf("Incorrecto. La letra '%c' no está en la palabra. Vidas restantes: %d\n\n", letra_ingresada, vidas_restantes);
        }

        if (letras_correctas == longitud_palabra_secreta) {
            ganador = 1;
        }
    }

    if (ganador) {
        printf("¡Felicidades! Has adivinado la palabra secreta '%s'.\n", palabra_secreta);
    } else {
        printf("Has agotado todas tus vidas. La palabra secreta era '%s'.\n", palabra_secreta);
    }
}

    
    





   


