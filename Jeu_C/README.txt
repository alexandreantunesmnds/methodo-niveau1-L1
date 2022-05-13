UTILISATION DU JEU (AVEC LINUX) :
Ouvrir le terminal
Si gcc n'est pas installé il faut l'installer grâce à la commande sudo apt install gcc.

Ensuite il faut compiler chaque modules grâce aux commande comme suit :
gcc -c outils.c
gcc -c creationPlateau.c 
gcc -c soldat.c 
gcc -c meteore.c 
gcc -c jeu.c 
gcc -c extension.c

Ensuite il faut compiler le main :

gcc main.c outils.o creationPlateau.o soldat.o meteore.o jeu.o extension.o -o main

Désormais vous pouvez lancer le jeu en appliquant la commande suivante :

./main


Bon jeu !