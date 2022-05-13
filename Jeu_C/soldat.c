/**
 * \file soldat.c
 * \author Alexandre ANTUNES & Baptiste COLLINOT
 * \brief fichier .c définnissant les fonctions du fichier .h
 * \date 2021-03-10
 * \b group: D1
 */
 #include <stdlib.h>
 #include <stdio.h>
 #include "soldat.h"

 void deplacer(soldat_t* sol, int pl[L][L]){
  char direction = 'a';
  while(direction != 'z' && direction != 's' && direction != 'q' && direction != 'd'){
       	printf("\nVeuillez choisir une direction avec z, q, s ou d :\n");
      while (getchar () != '\n');
      scanf("%c", &direction);

      if(direction != 'z' && direction != 's' && direction != 'q' && direction != 'd'){
          printf("\nSaisissez une lettre valide !\n");
      }
  }
 	switch (direction){
 		case 'z': //haut
      pl[sol->x][sol->y] = 0;
 			sol->x--;
 			if (sol->x < 0){
        printf("Vous êtes sorti de la carte, vous perdez votre tour.\n");
 				sol->x++;
 			}
 			if (pl[sol->x][sol->y] == 1){
 				printf("Vous êtes rentré dans un mur, vous perdez votre tour.\n");
        sol->x++;
 			}
      pl[sol->x][sol->y] = 3;
 	break;
 		case 'q': //gauche
      pl[sol->x][sol->y] = 0;
 			sol->y--;
 			if (sol->y < 0){
        printf("Vous êtes sorti de la carte, vous perdez votre tour.\n");
 				sol->y++;
 			}
 			if (pl[sol->x][sol->y] == 1){
        printf("Vous êtes rentré dans un mur, vous perdez votre tour.\n");
 				sol->y++;
 			}
      pl[sol->x][sol->y] = 3;
 	break;
 		case 's': //bas
      pl[sol->x][sol->y] = 0;
 			sol->x++;
 			if (sol->x > 19){
        printf("Vous êtes sorti de la carte, vous perdez votre tour.\n");
 				sol->x--;
 			}
 			if (pl[sol->x][sol->y] == 1){
        printf("Vous êtes rentré dans un mur, vous perdez votre tour.\n");
 				sol->x--;
 			}
      pl[sol->x][sol->y] = 3;
 	break;
 		case 'd': //droite
      pl[sol->x][sol->y] = 0;
 			sol->y++;
 			if (sol->y > 19){
        printf("Vous êtes sorti de la carte, vous perdez votre tour.\n");
 				sol->y--;
 			}
 			if (pl[sol->x][sol->y] == 1){
        printf("Vous êtes rentré dans un mur, vous perdez votre tour.\n");
 				sol->y--;
 			}
      pl[sol->x][sol->y] = 3;
 	break;
 	}
 }
