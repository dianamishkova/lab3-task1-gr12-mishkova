#include "interface.h"
#include "locale.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>

void rearrange_digits(int num) {
  int digits[10] = {0};

  while (num > 0) {
    digits[num % 10]++;
    num /= 10;
  }

  for (int i = 9; i >= 0; i--) {
    for (int j = 0; j < digits[i]; j++) {
      printf("%d", i);
    }
  }

  printf("\n");
}