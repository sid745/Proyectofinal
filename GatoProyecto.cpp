#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <iostream>


void jugarGatoProyecto() {
    // Implementación del juego Sopa3
    // ...
    
    
    
    
    using namespace std;

    system("color 75");
	char gato[3][3], opc;
	int x, y, columna, fila, ganador=0, turno=1;
	printf("GATO!\n");
	printf("\nJugador 1: x\n");
	printf("Jugador 2: o\n");
	printf("\n");
	for(y=0; y<3; y++)
	{
		for(x=0; x<3; x++)
		{
			gato[x][y]=' ';
			printf("|%c|", gato[x][y]);
		}
		printf("\n");
    }
	printf("\n\nPresiona C para comenzar\n");
	scanf("\n%c", &opc);
	
	if((opc=='C') or (opc=='c'))
	{
		do
		{
			if(turno%2==1)
			{
				do
				{
					printf("\JUGADOR 1 \n");
					printf("Proporciona la columna: ");
					scanf("%d",&columna);
					printf("Proporciona la fila: ");
					scanf("%d",&fila);
					
					if((gato[columna][fila]=='x') or (gato[columna][fila]=='o') or (fila>2) or (columna>2))
					{
						printf("\nEl espacio esta ocupado, intenta otra vez.\n");
					}
				}
				while((gato[columna][fila]=='x') or (gato[columna][fila]=='o') or (fila > 2) or (columna > 2));
				
				gato[columna][fila]='x';
				
				system("cls");
				for(y=0; y<3; y++)
				{
					for(x=0; x<3; x++)
					{
						printf("|%c|", gato[x][y]);
					}
					printf("\n");
				}
				turno++;
			} 
			else if(turno%2==0)
			{
				do
				{
					printf("\nJugador 2: \n");
					printf("Digite columna: ");
					scanf("%d", &columna);
					printf("Digite fila: ");
					scanf("%d", &fila);
					
					if((gato[columna][fila]=='x') or (gato[columna][fila]=='o') or (columna>2) or (fila>2))
					{
						printf("\nEl espacio esta ocupado, intenta otra vez.\n");
					}
				} 
				while((gato[columna][fila]=='x') or (gato[columna][fila]=='o') or (columna>2) or (fila>2));
				
				gato[columna][fila]='o';
				
				system("cls");
				for(y=0; y<3; y++)
				{
					for(x=0; x<3; x++)
					{
						printf("|%c|", gato[x][y]);
					}
					printf("\n");
				}
				turno++;
			}
			//Jugador 1
			if((gato[0][0] == 'x') and (gato[0][0] == gato[0][1]) and (gato[0][0] == gato[0][2]) or (gato[1][0] == 'x') and (gato[1][0] == gato[1][1]) and (gato[1][0] == gato[1][2]))
			{
				ganador=1;
				printf("\nFELICIDADES! JUGADOR 1 ES EL GANADOR\n");
				Beep (262,100);Sleep(125);
        		Beep (330,100);Sleep(125);
        		Beep (392,100);Sleep(125);
        		Beep (523,100);Sleep(125);
        		Beep (660,100);Sleep(125);
        		Beep (784,100);Sleep(575);
        		Beep (660,100);Sleep(575);
        		Beep (207,100);Sleep(125);
        		Beep (262,100);Sleep(125);
        		Beep (311,100);Sleep(125);
        		Beep (415,100);Sleep(125);
        		Beep (523,100);Sleep(125);
        		Beep (622,100);Sleep(125);
        		Beep (830,100);Sleep(575);
        		Beep (622,100);Sleep(575);
        		Beep (233,100);Sleep(125);
        		Beep (294,100);Sleep(125);
        		Beep (349,100);Sleep(125);
        		Beep (466,100);Sleep(125);
        		Beep (587,100);Sleep(125);
        		Beep (698,100);Sleep(125);
        		Beep (932,100);Sleep(575);
        		Beep (932,100);Sleep(125);
        		Beep (932,100);Sleep(125);
        		Beep (932,100);Sleep(125);
        		Beep (1046,675);
       
    
        system ("pause");

			}
			if((gato[2][0] == 'x') and (gato[2][0] == gato[2][1]) and (gato[2][0] == gato[2][2]) or (gato[0][0] == 'x') and (gato[0][0] == gato[1][0]) and (gato[0][0] == gato[2][0])) 
			{
				ganador=1;
				printf("\nFELICIDADES! JUGADOR 1 ES EL GANADOR\n");
				Beep (262,100);Sleep(125);
        		Beep (330,100);Sleep(125);
        		Beep (392,100);Sleep(125);
        		Beep (523,100);Sleep(125);
        		Beep (660,100);Sleep(125);
        		Beep (784,100);Sleep(575);
        		Beep (660,100);Sleep(575);
        		Beep (207,100);Sleep(125);
        		Beep (262,100);Sleep(125);
        		Beep (311,100);Sleep(125);
        		Beep (415,100);Sleep(125);
        		Beep (523,100);Sleep(125);
        		Beep (622,100);Sleep(125);
        		Beep (830,100);Sleep(575);
        		Beep (622,100);Sleep(575);
        		Beep (233,100);Sleep(125);
        		Beep (294,100);Sleep(125);
        		Beep (349,100);Sleep(125);
        		Beep (466,100);Sleep(125);
        		Beep (587,100);Sleep(125);
        		Beep (698,100);Sleep(125);
        		Beep (932,100);Sleep(575);
        		Beep (932,100);Sleep(125);
        		Beep (932,100);Sleep(125);
        		Beep (932,100);Sleep(125);
        		Beep (1046,675);
				
			}
			if((gato[0][1] == 'x') and (gato[0][1] == gato[1][1]) and (gato[0][1] == gato[2][1]) or (gato[0][2] == 'x') and (gato[0][2] == gato[1][2]) and (gato[0][2] == gato[2][2]))
			{
				ganador=1;
				printf("\nFELICIDADES! JUGADOR 1 ES EL GANADOR\n");
				Beep (262,100);Sleep(125);
        		Beep (330,100);Sleep(125);
        		Beep (392,100);Sleep(125);
        		Beep (523,100);Sleep(125);
        		Beep (660,100);Sleep(125);
        		Beep (784,100);Sleep(575);
        		Beep (660,100);Sleep(575);
        		Beep (207,100);Sleep(125);
        		Beep (262,100);Sleep(125);
        		Beep (311,100);Sleep(125);
        		Beep (415,100);Sleep(125);
        		Beep (523,100);Sleep(125);
        		Beep (622,100);Sleep(125);
        		Beep (830,100);Sleep(575);
        		Beep (622,100);Sleep(575);
        		Beep (233,100);Sleep(125);
        		Beep (294,100);Sleep(125);
        		Beep (349,100);Sleep(125);
        		Beep (466,100);Sleep(125);
        		Beep (587,100);Sleep(125);
        		Beep (698,100);Sleep(125);
        		Beep (932,100);Sleep(575);
        		Beep (932,100);Sleep(125);
        		Beep (932,100);Sleep(125);
        		Beep (932,100);Sleep(125);
        		Beep (1046,675);
			}
			if((gato[0][0] == 'x') and (gato[0][0] == gato[1][1]) and (gato[0][0] == gato[2][2]) or (gato[0][2] == 'x') and (gato[0][2] == gato[1][1]) and (gato[0][2] == gato[2][0]))
			{
				ganador=1;
				printf("\nFELICIDADES! JUGADOR 1 ES EL GANADOR\n");
				Beep (262,100);Sleep(125);
        		Beep (330,100);Sleep(125);
        		Beep (392,100);Sleep(125);
        		Beep (523,100);Sleep(125);
        		Beep (660,100);Sleep(125);
        		Beep (784,100);Sleep(575);
        		Beep (660,100);Sleep(575);
        		Beep (207,100);Sleep(125);
        		Beep (262,100);Sleep(125);
        		Beep (311,100);Sleep(125);
        		Beep (415,100);Sleep(125);
        		Beep (523,100);Sleep(125);
        		Beep (622,100);Sleep(125);
        		Beep (830,100);Sleep(575);
        		Beep (622,100);Sleep(575);
        		Beep (233,100);Sleep(125);
        		Beep (294,100);Sleep(125);
        		Beep (349,100);Sleep(125);
        		Beep (466,100);Sleep(125);
        		Beep (587,100);Sleep(125);
        		Beep (698,100);Sleep(125);
        		Beep (932,100);Sleep(575);
        		Beep (932,100);Sleep(125);
        		Beep (932,100);Sleep(125);
        		Beep (932,100);Sleep(125);
        		Beep (1046,675);
			}
			
			//Jugador2
			if((gato[0][0] == 'o') and (gato[0][0] == gato[0][1]) and (gato[0][0] == gato[0][2]) or (gato[1][0] == 'o') and (gato[1][0] == gato[1][1]) and (gato[1][0] == gato[1][2]))
			{
				ganador=1;
				printf("\nFELICIDADES! JUGADOR 2 ES EL GANADOR\n");
				Beep (262,100);Sleep(125);
        		Beep (330,100);Sleep(125);
        		Beep (392,100);Sleep(125);
        		Beep (523,100);Sleep(125);
        		Beep (660,100);Sleep(125);
        		Beep (784,100);Sleep(575);
        		Beep (660,100);Sleep(575);
        		Beep (207,100);Sleep(125);
        		Beep (262,100);Sleep(125);
        		Beep (311,100);Sleep(125);
        		Beep (415,100);Sleep(125);
        		Beep (523,100);Sleep(125);
        		Beep (622,100);Sleep(125);
        		Beep (830,100);Sleep(575);
        		Beep (622,100);Sleep(575);
        		Beep (233,100);Sleep(125);
        		Beep (294,100);Sleep(125);
        		Beep (349,100);Sleep(125);
        		Beep (466,100);Sleep(125);
        		Beep (587,100);Sleep(125);
        		Beep (698,100);Sleep(125);
        		Beep (932,100);Sleep(575);
        		Beep (932,100);Sleep(125);
        		Beep (932,100);Sleep(125);
        		Beep (932,100);Sleep(125);
        		Beep (1046,675);
			}
			if((gato[2][0] == 'o') and (gato[2][0] == gato[2][1]) and (gato[2][0] == gato[2][2]) or (gato[0][0] == 'o') and (gato[0][0] == gato[1][0]) and (gato[0][0] == gato[2][0]))
			{
				ganador=1;
				printf("\nFELICIDADES! JUGADOR 2 ES EL GANADOR\n");
				Beep (262,100);Sleep(125);
        		Beep (330,100);Sleep(125);
        		Beep (392,100);Sleep(125);
        		Beep (523,100);Sleep(125);
        		Beep (660,100);Sleep(125);
        		Beep (784,100);Sleep(575);
        		Beep (660,100);Sleep(575);
        		Beep (207,100);Sleep(125);
        		Beep (262,100);Sleep(125);
        		Beep (311,100);Sleep(125);
        		Beep (415,100);Sleep(125);
        		Beep (523,100);Sleep(125);
        		Beep (622,100);Sleep(125);
        		Beep (830,100);Sleep(575);
        		Beep (622,100);Sleep(575);
        		Beep (233,100);Sleep(125);
        		Beep (294,100);Sleep(125);
        		Beep (349,100);Sleep(125);
        		Beep (466,100);Sleep(125);
        		Beep (587,100);Sleep(125);
        		Beep (698,100);Sleep(125);
        		Beep (932,100);Sleep(575);
        		Beep (932,100);Sleep(125);
        		Beep (932,100);Sleep(125);
        		Beep (932,100);Sleep(125);
        		Beep (1046,675);
			}
			if((gato[0][1] == 'o') and (gato[0][1] == gato[1][1]) and (gato[0][1] == gato[2][1]) or (gato[0][2] == 'o') and (gato[0][2] == gato[1][2]) and (gato[0][2] == gato[2][2]))
			{
				ganador=1;
				printf("\nFELICIDADES! JUGADOR 2 ES EL GANADOR\n");
				Beep (262,100);Sleep(125);
        		Beep (330,100);Sleep(125);
        		Beep (392,100);Sleep(125);
        		Beep (523,100);Sleep(125);
        		Beep (660,100);Sleep(125);
        		Beep (784,100);Sleep(575);
        		Beep (660,100);Sleep(575);
        		Beep (207,100);Sleep(125);
        		Beep (262,100);Sleep(125);
        		Beep (311,100);Sleep(125);
        		Beep (415,100);Sleep(125);
        		Beep (523,100);Sleep(125);
        		Beep (622,100);Sleep(125);
        		Beep (830,100);Sleep(575);
        		Beep (622,100);Sleep(575);
        		Beep (233,100);Sleep(125);
        		Beep (294,100);Sleep(125);
        		Beep (349,100);Sleep(125);
        		Beep (466,100);Sleep(125);
        		Beep (587,100);Sleep(125);
        		Beep (698,100);Sleep(125);
        		Beep (932,100);Sleep(575);
        		Beep (932,100);Sleep(125);
        		Beep (932,100);Sleep(125);
        		Beep (932,100);Sleep(125);
        		Beep (1046,675);
			}
			if((gato[0][0] == 'o') and (gato[0][0] == gato[1][1]) and (gato[0][0] == gato[2][2]) or (gato[0][2] == 'o') and (gato[0][2] == gato[1][1]) and (gato[0][2] == gato[2][0]))
			{
				ganador=1;
				printf("\nFELICIDADES! JUGADOR 2 ES EL GANADOR\n");
				Beep (262,100);Sleep(125);
        		Beep (330,100);Sleep(125);
        		Beep (392,100);Sleep(125);
        		Beep (523,100);Sleep(125);
        		Beep (660,100);Sleep(125);
        		Beep (784,100);Sleep(575);
        		Beep (660,100);Sleep(575);
        		Beep (207,100);Sleep(125);
        		Beep (262,100);Sleep(125);
        		Beep (311,100);Sleep(125);
        		Beep (415,100);Sleep(125);
        		Beep (523,100);Sleep(125);
        		Beep (622,100);Sleep(125);
        		Beep (830,100);Sleep(575);
        		Beep (622,100);Sleep(575);
        		Beep (233,100);Sleep(125);
        		Beep (294,100);Sleep(125);
        		Beep (349,100);Sleep(125);
        		Beep (466,100);Sleep(125);
        		Beep (587,100);Sleep(125);
        		Beep (698,100);Sleep(125);
        		Beep (932,100);Sleep(575);
        		Beep (932,100);Sleep(125);
        		Beep (932,100);Sleep(125);
        		Beep (932,100);Sleep(125);
        		Beep (1046,675);
			}
			if ((ganador==0) and (turno==10))
            {
                printf("EMPATE!");
                ganador=1;
            }
		} 
		while(ganador != 1);
	} 
	
	
	


    
    
    
    
    
    
    printf("Bienvenido a GatoProyecto");
    // Resto de la lógica del juego
    
    
}


