/**
 * \file soldat.h
 * \author Alexandre ANTUNES & Baptiste COLLINOT
 * \brief fichier .h des prototypes de meteore.c
 * \date 2021-03-04
 * \b group: D1
 */
#ifndef METEORE_H
#define METEORE_H
#define L 20

/**
 * \struct meteore
 * \typedef meteore_t
 * \brief Meteore avec sa position (x,y) et sa taille.
 */
struct meteore {
    int x; /*!< abscisses */
    int y; /*!< ordonnées*/
    int size; /*!< taille du meteore*/
};
typedef struct meteore meteore_t;

/**
 * \brief  crée un nouveau meteore et le positionne aléatoirement. Sa taille variera entre 1 et 3.
 * \return
 */
 meteore_t newMeteore();

 /**
  * \brief Ajoute le méteore au plateau
  * \param plateau Tableau d'entier à double entrée de taille \a L sur \a L.
  * \param met Enregistrement de type mur_t.
  * \return
  */
void ajouter_meteore(int plateau[L][L], meteore_t met);
/**
 * \brief Enlève le méteore au plateau
 * \param plateau Tableau d'entier à double entrée de taille \a L sur \a L.
 * \return
 */
void enleve_meteore(int plateau [L][L]);

#endif
