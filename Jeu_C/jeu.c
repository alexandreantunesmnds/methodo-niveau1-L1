/**
* \file jeu.c
* \author Alexandre ANTUNES & Baptiste COLLINOT
* \brief fichier .c définnissant les fonctions du fichier .h
* \date 2021-03-08
* \b group: D1
*/
#include <stdlib.h>
#include <stdio.h>

#include "creationPlateau.h"
#include "meteore.h"
#include "soldat.h"
#include "jeu.h"

void afficher(int pl[L][L], soldat_t sol, meteore_t met){
int i;
//la sortie a atteindre se trouve en bas à droite
pl[19][19]=4;
  //Affichage des objets
  for(i = 0 ; i < L ; i++){
    for(int j = 0 ; j < L ; j++){
      switch (pl[i][j])
      {
      case 0://on affiche rien
        printf(".");
      break;
      case 1://alors on affiche les murs
        printf("*");
      break;
      case 2://météore
        printf("#");
      break;
      case 3://soldat
        printf ("S");
      break;
      case 4://sortie
        printf ("O");
      break;
      default:
        printf("  ");
      break;
    }
  }
  printf("\n");
}
}

//affichage de la mission
void mission(){
    printf("Scenario :\n");
    printf("Le jury de L1 est dans 10 minutes.\n");
    printf("Vous êtes un enseignant et venez d’arriver en voiture,vous devez traverser le parking avec les copies sous le bras pour atteindre le bâtiment HP où vous attendent vos collègues.\n");
    printf("Une horde d’étudiants méchants veulent vous empêcher de passer, espérant détruire vos copies et ainsi repasser les examen\n");
    printf("Ils ont installe une catapulte sur le toit et vous bombardent de meteores.\n");

    printf("Arriverez-vous a passer, malgre les voitures qui forment des murs dans le parking et les projectiles ?\n\n");
}
// Le joueur choisit s'il veut afficher les règles du jeu ou non
int choice_rules()
{
    int rep;

     while(rep != 1 && rep != 2){
        printf("Voulez-vous afficher les regles ?\n1.Oui  2. Non\nVotre choix : ");
        scanf("%d",&rep);
    }

    return rep;
}
//Procédure qui affiche les règles du jeu
void rules()
{
    printf("Voici les règles : \n");
    printf("- Vous etes representes par un S sur la carte. \n");
    printf("- Pour vous déplacer vous devrez appuyer sur :\n-z pour monter \n-s pour descendre \n-q pour aller vers la gauche \n-d pour aller vers la droite \n");
    printf("- Vous devez vous rendre en bas a droite de la carte (vers la sortie représentée par un 'O'). \n");
    printf("\n");
    printf("- Les voitures sont représentées par des '*' (vous ne pourrez pas passer à travers). \n");
    printf("- Les méteores lancés par les élêves sont représentés par des '#', vous devez les évitez sinon c'est la mort assurée ! \n");
    printf("- Les méteores détruisent les voitures si  celles-ci sont touchées !\n");
    printf("\n");
    printf("\n Que la chance soit avec vous !\n");
}
//condition si soldat arriver alors c'est gagner !
int arriver(soldat_t sol){
    if(sol.x == 19 && sol.y == 19){
        return 1;
    }
    return 0;
  }
int touch(soldat_t sol, meteore_t met){
  if(sol.x==met.x && sol.y==met.y){
    return 1;
  }
  return 0;
}
int choix_jeu()
{
    int relance = 0;

    while(relance != 1 && relance != 2){
        printf("\n1.Rejouer ?\n2.Quitter ?\nVotre choix :");
        scanf("%d", &relance);
    }

    return relance;
}
