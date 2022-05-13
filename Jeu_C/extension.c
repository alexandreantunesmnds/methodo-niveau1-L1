/**
* \file extension.c
* \author Alexandre ANTUNES & Baptiste COLLINOT
* \brief fichier .c contenant des extensions pour le jeux
* \date 2021-03-08
* \b group: D1
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Pour le srand(time(NULL))

#include "extension.h"
#include "creationPlateau.h"
#include "soldat.h"
#include "meteore.h"
//Les météores peuvent détruire les murs touchés
void destroy (int pl[L][L], mur_t mur,meteore_t met){
  for(int i = 0 ; i < L ; i++){
      for(int j = 0 ; j < L ; j++){
        if (mur.x == met.x && mur.y == met.y ){
          pl[i][j] = 0;
        }
      }
  }
}
