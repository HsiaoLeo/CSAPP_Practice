#include "inplaceSwap/inplaceSwap.h"
#include <stdio.h>

int main(){
  int a = 5;
  int b = 3;
  printf("%d - %d\n",a,b);
  inplace_swap(&a,&b);
  printf("%d - %d\n",a,b);
  return 0;
}
