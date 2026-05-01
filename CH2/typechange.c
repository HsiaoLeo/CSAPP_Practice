#include <stdio.h>
int main(){
  short int v = -12345;
  unsigned short uv = (unsigned short)v;
  
  unsigned u = 4294967295u;
  int tu = (int)u;
 
  int x = -1;
  unsigned int uu = 2147483648;

  printf("v = %d, uv = %u\n",v,uv);  
  printf("u = %u, tu = %d\n",u,tu);
  printf("x = %u = %d\n",x,x);
  printf("uu = %u = %d\n",uu,uu);  

  return 0;
}
