/**
 * \file creationPlateau.c
 * \author Alexandre ANTUNES & Baptiste COLLINOT
 * \brief fichier .c définnissant les fonctions du fichier .h
 * \date 2021-03-08
 * \b group: D1
 */
#include <stdlib.h>
#include <stdio.h>
#include "creationPlateau.h"

//crée un nouveau mur aléatoirement
mur_t new_mur(){
  mur_t m;
  //génère aléatoirement les coordonnées du mur
  m.x=randint(0,19);
  m.y=randint(0,19);
  m.size=randint(1,8);
  m.direction=randint(1,4);// 4 valeurs : nord, sud, est, ouest représenté par des int
  return m;
}
//ajouter un mur au plateau
void ajouter_mur(int plateau[L][L], mur_t m){
  int colonne=m.x, ligne=m.y;
  //condition switch pour l'orientation du mur selon sa direction
   switch (m.direction)
   {
   case 1: //nord
       for(int y = ligne ; y >  ligne - m.size ; y--){
           plateau[colonne][y] = 1;
         }
       break;
   case 2: //sud
       for(int y = ligne; y < ligne - m.size; y++){
           plateau[colonne][y] = 1;
       }
   break;
   case 3: //est
       for(int x = colonne; x > colonne - m.size ; x--){
           plateau[x][ligne] = 1;
       }
       break;
   case 4: //ouest
       for(int x = colonne; x < colonne + m.size ; x++){
           plateau[x][ligne] = 1;
       }
   break;
   default:
       printf("Il y'a un problème de direction des murs\n");
   break;
   }
}
//Initialise le plateau
void newPlateau(int plateau[L][L], int nb_murs){
    mur_t m;
    int i = 0;

    //intialisation du tableau à 2 dimensions
    for(int x = 0 ; x < L ; x++){
        for(int y = 0 ; y < L ; y++){
            plateau[x][y]= 0;
        }
    }

    //ajout des murs
    while (i<nb_murs){
        m = new_mur();
        ajouter_mur(plateau, m);
        i++;
    }
    plateau[19][19] = 4;
}
