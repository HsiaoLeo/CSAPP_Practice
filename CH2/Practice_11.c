#include "inplaceSwap/inplaceSwap.h"
#include <stdio.h>

void reverse_array_wrong(int arr[],int len){
  int first = 0,last = len-1;
  while(first <= last){
    inplace_swap(&arr[first],&arr[last]);
    first++;
    last--;
  }
}

void reverse_array(int arr[],int len){
  int first = 0,last = len-1;
  while(first < last){
    inplace_swap(&arr[first],&arr[last]);
    first++;
    last--;
  }
}

void print_array(int arr[], int len){
  for(int i=0;i<len;i++){
    printf("%d\n",arr[i]);
  }
}

int main(){
  int a[] = {1,2,3,4,5,6,7};
  int b[] = {1,2,3,4,5,6,7,8,9};
  int len = sizeof(a) / sizeof (int);
  int lenb = sizeof(b) / sizeof(int);
  printf("array a:\n");
  print_array(a,len);
  printf("wrong reverse array a\n");
  reverse_array_wrong(a,len);
  print_array(a, len);
  printf("array b:\n");
  print_array(b, lenb);
  printf("reverse array b\n");
  reverse_array(b, lenb);
  print_array(b, lenb);
  return 0;
}
