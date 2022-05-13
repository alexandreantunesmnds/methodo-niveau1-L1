/**
* \file meteore.c
* \author Alexandre ANTUNES & Baptiste COLLINOT
* \brief fichier .c définnissant les fonctions du fichier .h
* \date 2021-03-11
* \b group: D1
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>//Pour la fonction srand

#include "meteore.h"
#include "creationPlateau.h"
#include "outils.h"

//Ajout d'une météore
meteore_t newMeteore(){
  meteore_t met;
  met.x=randint(0,19);
  met.y=randint(0,19);
  met.size=randint(1,3);
  return met;
}

void ajouter_meteore(int plateau[L][L], meteore_t met){
  //condition switch pour l'orientation du mur selon sa direction
   switch (met.size)
   {
   case 1: //taille vaut 1
    plateau[met.x][met.y] = 2;
    break;
   case 2:
   for (int i = 0; i < 2; i++){
     plateau[met.x][met.y+i] = 2;
   }
   break;
   case 3:
   for (int i = 0; i < 3; i++){
     plateau[met.x][met.y+i] = 2;
   }
   break;
   default:
       printf("Il y'a un problème avec l'ajout du meteore\n");
   break;
   }
}

void enleve_meteore(int plateau [L][L]){
  for(int x = 0 ; x < L ; x++){
      for(int y = 0 ; y < L ; y++){
          if (plateau[x][y]==2){
            plateau[x][y]=0;
          }
      }
  }
}
