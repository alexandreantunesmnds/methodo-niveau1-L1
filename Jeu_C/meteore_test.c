#include <stdlib.h>
#include <stdio.h>
#include "meteore.h"

void test_newMeteore_param(meteore_t met){
  printf("Le météore a pour coordonnées :(%d , %d)\n Taille : %d\n ",met.x, met.y,met.size);
}

void test_newMeteore(){
  meteore_t  met1 = newMeteore();
  meteore_t met2 = newMeteore();
  test_newMeteore_param(met1);
  test_newMeteore_param(met2);

}

int main(int argc, char * argv[]){
test_newMeteore();

return EXIT_SUCCESS;
}
