/**
* \file main.c
* \author Alexandre ANTUNES & Baptiste COLLINOT
* \brief fichier principal contenant le programme du jeu
* \date 2021-03-08
* \b group: D1
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>//Pour la fonction srand

#include "creationPlateau.h"
#include "meteore.h"
#include "soldat.h"
#include "jeu.h"
#include "outils.h"


int main(int argc, char * argv[]){
  srand(time(NULL)); //Pour le generateur aleatoire
  int pl[L][L];
  int nb_murs = randint(1, 20), gagne,toucher,choix_regles, rejouer = 1;
  soldat_t sol;
  meteore_t met;
  printf("==================== JEU DU SOLDAT ====================\n\n");
  //Démarage du jeu, consigne et règles:
  mission();
  choix_regles = choice_rules();

  if(choix_regles == 1){
      rules();
  }
  while (rejouer==1){
  //initialisation du plateau de jeu
  newPlateau(pl,nb_murs);
  //initialisation du soldat
  sol.x = 0;
  sol.y = 0;
  pl[sol.x][sol.y] = 3;
  //initialisation du jeu
  gagne=0;
  toucher=0;
  afficher(pl,sol, met);
	while ((gagne==0) && (toucher == 0)) {
    met = newMeteore();
    ajouter_meteore(pl,met);
    deplacer(&sol,pl);
    afficher(pl,sol, met);
    gagne = arriver(sol);
    toucher= touch(sol,met);
    enleve_meteore(pl);
		}
	if (gagne == 1){
		printf("\nBravo ! Vous avez atteint le batiment HP, vous êtes arriver à temps pour participer aux jurys !\n");
	}
	if (toucher == 1 ) {
		printf("Game Over... Vous avez perdu, un meteore vous est tomber dessus !\n");
	}
rejouer = choix_jeu();
}
printf("\nVous avez quitter le jeu, merci d'avoir jouer !\n");
return EXIT_SUCCESS;
}
