#include <stdio.h>
int func1(unsigned word){
  return (int)((word << 24) >> 24);
}
int func2(unsigned word){
  return ((int)word << 24) >> 24;
}
int main(){
  unsigned w1 = 0x00000076;
  unsigned w2 = 0x87654321;
  unsigned w3 = 0x000000c9;
  unsigned w4 = 0xEDCBA987;
  printf("w1 => (func1)%#010x => (func2)%#010x\n", func1(w1), func2(w1));
  printf("w2 => (func1)%#010x => (func2)%#010x\n", func1(w2), func2(w2));
  printf("w3 => (func1)%#010x => (func2)%#010x\n", func1(w3), func2(w3));
  printf("w4 => (func1)%#010x => (func2)%#010x\n", func1(w4), func2(w4));
  return 0;
}
