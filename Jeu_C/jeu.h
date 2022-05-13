/**
 * \file soldat.h
 * \author Alexandre ANTUNES
 * \brief fichier .h des prototypes de creationPlateau.c
 * \date 2021-03-04
 * \b group: D1
 */
 #ifndef JEU_H
 #define JEU_H
 #define L 20

 #include "creationPlateau.h"
 #include "soldat.h"
 #include "meteore.h"
 /**
 * \brief affiche le soldat par un S, la météore par des # et les murs par des *
 * \param tableau d'entier à double entrée p1
 * \param variable \a sol de type soldat_t
 * \param variable \a met de type meteor_t
 */
void afficher(int pl[L][L], soldat_t sol, meteore_t met);


/**
* \brief affiche le scénario du jeu et ce que doit faire le joueur
*/
void mission();


/**
* \brief informe si le joueur est arriver ou non (retourne 1 si le joueur est arrivé, 0 sinon)
* \param variable \a sol de type soldat_t
*/
int arriver(soldat_t sol);


/**
* \brief informe si le joueur est touché par un météore
* \param variable \a sol de type soldat_t
* \param variable \a met de type meteor_t
*/
int touch(soldat_t sol, meteore_t met);


/**
* \brief informe si le joueur souhaite rejouer ou non
*/
int choix_jeu();

/**
* \brief affiche les règles si le joueur le souhaite
*/
void rules();

/**
* \brief informe sur le choix du joueur s'il souhaite ou non afficher les règles.
*/
int choice_rules();


  #endif
