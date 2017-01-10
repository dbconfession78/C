// Libraries
#include <stdio.h>
#define MAXCHARS 1000

/* Excercise 2-4: Write an alternative version of squeeze(s1, s2) that deletes each character in s1 that 
   matches any character in the string s2. */

int djc_squeeze(char s1[], char s2[]);

int main() {
  char input_string1[MAXCHARS];
  char input_string2[MAXCHARS];
  
  printf("\nEnter string 1 to squeeze:\n");
  fgets(input_string1, 256, stdin);
  printf("\nEnter characters to squeeze out of string 1:\n");
  fgets(input_string2, 256, stdin);
  
  if (djc_squeeze(input_string1, input_string2)) {
    printf("squeezed string: %s\n", input_string1);
  } else {
    printf("There were no dublicates to squeeze, try again\n");
  }
  
  return 0;
}

int djc_squeeze(char s1[], char s2[]) {

  int idx1 = 0, idx2, idx3 = 0;
  char duplicate_string[MAXCHARS];
  int duplicate_char;

  while (s1[idx1] != '\n') {
    
    idx2 = 0;
    duplicate_char = 0;
    while (s2[idx2] != '\n') {
      
      if (s1[idx1] == s2[idx2]) {
	duplicate_char = 1;
	break;
      }
      idx2 ++;
    }

    if (duplicate_char == 0) {
      duplicate_string[idx3] = s1[idx1];
      idx3++;
    }
    idx1++;
  }

  if (idx1 != idx3) {

    for (idx1 = 0; duplicate_string[idx1] != '\0'; idx1++) {
      s1[idx1] = duplicate_string[idx1];
    }
    s1[idx1] = '\0';
    return 1;
  } else {
    return 0;
  }
}
