#include "interface.h"
#include "locale.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: %s <n>\n", argv[0]);
    return 1;
  }

  int n = atoi(argv[1]);

  srand(time(NULL));

  int arr[100];
  int i;
  for (i = 0; i < n; i++) {
    arr[i] = rand() % 100 + 1;
  }

  printf("Original array:\n");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  printf("Rearranged digits:\n");
  for (i = 0; i < n; i++) {
    rearrange_digits(arr[i]);
  }

  return 0;
}
