/**
 * \file extension.h
 * \brief Bibliothèque du module contenant des extensions pour le jeux
 * \author Alexandre ANTUNES & Baptiste COLLINOT
 * \date 04/03/2021
 */
 #ifndef EXTENSION_H
 #define EXTENSION_H

 #include "creationPlateau.h"
 #include "soldat.h"
 #include "meteore.h"

 /**
  * \brief Le méteore détruit les murs touchés
  * \param plateau Tableau d'entier à double entrée de taille \a L sur \a L.
  * \param mur Enregistrement de type mur_t.
  * \param met Enregistrement de type meteore_t.
  * \return
  */
void destroy (int pl[L][L], mur_t mur,meteore_t met);


#endif
