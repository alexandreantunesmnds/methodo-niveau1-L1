/**
 * \file soldat.h
 * \author Alexandre ANTUNES
 * \brief fichier .h des prototypes de creationPlateau.c
 * \date 2021-03-04
 * \b group: D1
 */
 #ifndef SOLDAT_H
 #define SOLDAT_H
 #define L 20

 /**
 * \struct soldat
 * \typedef soldat_t
 * \brief structure du joueur (soldat)
 */
 struct soldat {
     int x; /*!< abscisses */
     int y; /*!< ordonnées */
 };
 typedef struct soldat soldat_t;

 /**
   * \brief demande au joueur de saisir un caractère zqsd et déplace le joueur
   * \param  pointeur sol de type enregistrement soldat_t
   * \param  tableau d'entiers à double entrée p1
   */
 void deplacer(soldat_t* sol, int pl[L][L]);

 #endif
