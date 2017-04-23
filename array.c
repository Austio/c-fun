#include <stdio.h>

/* Arrays are in effect pointers */
void main(int argc, char **argv) {
  char str1[] = "Hiya";
  char *str2 = "Howdy";

  printf("%d %d %d\n", &str1, str1, str1);
  printf("%d %d %d\n", &str2, str2, str2);
}
