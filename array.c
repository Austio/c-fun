#include <stdio.h>

/* Arrays are in effect pointers */
int main(int argc, char **argv) {
  char str1[] = "Hiya";
  char *str2 = "Howdy";
  str2 = &str1;

  printf("%d %d %s\n", &str1, str1, str1);
  printf("%d %d %s\n", &str2, str2, str2);

  return 0;
}
