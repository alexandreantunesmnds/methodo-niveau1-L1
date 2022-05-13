/**
 * \file creationPlateau.h
 * \author Alexandre ANTUNES & Baptiste COLLINOT
 * \brief fichier .h des prototypes de creationPlateau.c
 * \date 2021-03-04
 * \b group: D1
 */
#ifndef CREATIONPLATEAU_H
#define CREATIONPLATEAU_H
#define L 20
#include "outils.h"
/**
 * \struct mur
 * \typedef mur_t
 * \brief Mur avec ses coordonnées de départ, sa taille et sa direction.
 */
struct mur {
    int x; /*!< abscisses */
    int y; /*!< ordonnées*/
    int size; /*!< taille du mur*/
    int direction; /*!< direction du mur */
};
typedef struct mur mur_t;

/**
 * \brief Crée un nouveau mur aléatoirement. Il peut dépasser les limites du plateau.
 * \return un nouveau enregistrement aléatoire \a m.
 */
mur_t new_mur();


/**
 * \brief Ajoute le mur au plateau. Le plateau est un tableau d’entier. 0 représente une case vide, 1 une case avec un mur.
 * \param plateau Tableau d'entier à double entrée de taille \a L sur \a L.
 * \param m Enregistrement de type mur_t.
 * \return
 */
void ajouter_mur(int plateau[L][L], mur_t m);


/**
 * \brief attend un tableau non initialisé. L’initialise et ajoute nb_murs murs.
 * \param plateau Tableau d'entier à double entrée de taille \a L sur \a L.
 * \param nb_murs Nombre de murs.
 * \return
 */
void newPlateau(int plateau[L][L], int nb_murs);


#endif
