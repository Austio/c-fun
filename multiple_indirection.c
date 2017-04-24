#include <stdio.h>

#define LENGTH 3

int data[LENGTH];

int main(int argc, char **argv) {
  int *pi;
  int **pie;

  printf("Multiple indirection example\n");

  // initialize integer array
  for (int i = 0; i < LENGTH; i++) {
    data[i] = i;
  }

  for (int i = 0; i < LENGTH; i++) {
    printf("Data is %d\n", data[i]);
  }


  printf("\n New examples with simple pointer to integer");

  pi = data;
  pie = &pi;

  printf("\nArray is %p and does not change\n\n", data);

  for (int i = 0; i < LENGTH; i++) {
    printf("Data is %d at loop %d\n", data[i], i);
    printf("PI value is %d and pointer is %d\n", *pi, pi);
    printf("pie value is %d and pointer is %d\n", *pie, pi);
    printf("pie Double indirection %d\n", **pie);
    printf("Address of pi %p and value of pi is %p\n\n", &pi, pie);

    pi += 1;
  }
}
