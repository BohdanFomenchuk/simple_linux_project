// factorial.c
#include "calc.h"

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

