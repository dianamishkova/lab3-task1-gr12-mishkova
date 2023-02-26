#include <stdlib.h>
#include <stdio.h>
#include "hello.h"

int main ()
{
  float m,km,m1;
  printf("km = ");
  scanf("%f",&km);
  printf("m = ");
  scanf("%f",&m);
  m1 = m * 3.6;
  if(km<m1){
    printf("%f m/s", m);
  }
  else if(km>m1){
    printf("%f km/h", km);
  }
  else{
    printf("equals");
  }
  return 0;
}
