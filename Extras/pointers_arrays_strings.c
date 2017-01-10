#include "stdio.h"

int main(void) {


  printf("\n\n\n-----------------------------------------------\n");
  printf("Program to help with Arrays, Strings & Pointers\n");
  printf("-----------------------------------------------\n\n\n\n");


  int i;
  int integerA = 1;
  int *pintegerA = &integerA;
  printf("testing integers, addresses, and pointers\n");
  printf("is this an integer--------------: %d\n", integerA);
  printf("is this the address of integerA-: %p\n", &integerA);
  printf("is this the pointer for integerA: %p\n", pintegerA);
  printf("\n--------------------------------------------\n\n");


    
  int array[] = {1, 2, 3, 4};
    
  printf("testing array of integers\n");
  printf("is this an array------: { ");
  for (i=0; i < (sizeof (array) /sizeof (array[0])); i++) {
    printf("%d ", array[i]); }
  printf("}\n");
  printf("is this index 0 of array: %d\n", array[0]);
  printf("\n--------------------------------------------\n\n");
    
  int *parray = array;
  
  /* 
  **
  ** NOTE!! Since array is already a pointer, you cannot use the code `&array` to symbolize the address of array.
  ** If you use `&array` the conventional way of creating a pointer, your program will still function, but it
  ** will output this errer below when compiling the program:

pointers_arrays_strings.c:32:8: warning: incompatible pointer types initializing 'int *' with an expression of type 'int (*)[4]' [-Wincompatible-pointer-types]
  int *parray = &array;
       ^        ~~~~~~
  ** Another fix is to name your pointer to the array *parray = array[0], since the index 0 is the same address
  ** as the address of your array.
  **
  */

  printf("testing address of array of integers\n");
  printf("addresses of indexes in an array----: { ");
  for (i=0; i < (sizeof (array) /sizeof (array[0])); i++) {
    printf("%p ", &array[i]); }
  printf("}\n");
  printf("is this address of index 0 in an array: %p\n", &array[0]);
  printf("is the pointer to an array------------: %p\n", parray);
  printf("is this address of array -------------: %p\n", &array);
  printf("\n--------------------------------------------\n\n");
    

  char string[] = "string";
  
  printf("testing string conventional style\n");
  printf("is this a string------: %s\n", string);
  printf("is this char @ index 0: %c\n", string[0]);
  printf("\n--------------------------------------------\n\n");

    
  char string_array[] = {'s', 't', 'r', 'i', 'n', 'g', '-', 'a', 'r', 'r', 'a', 'y', '\0'};
  
  printf("testing array of chars, non-conventional\n");
  printf("is this an array of chars: %s\n", string_array);
  printf("is this char @ index 0---: %c\n", string_array[0]);
  printf("\n--------------------------------------------\n\n");
  

  char *pstring = string;
  /* See above NOTE!! */
  
  printf("testing address & pointers of string\n");
  printf("is this a string-------------------: %s\n", string);
  printf("is this address of string----------: %p\n", &string);
  printf("is this pointer to string----------: %p\n", pstring);
  printf("is this a char @ index 0-----------: %c\n", string[0]);
  printf("pointer to index char @ 0 of string: %p\n", &string[0]);
  printf("\n--------------------------------------------\n\n");


  return 0;
}
