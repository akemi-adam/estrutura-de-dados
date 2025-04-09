#include "metrics.h"
#include <time.h>
#include <stdio.h>

void exec_action(void (*action)()) {
    struct timespec a, b;
    clock_gettime(CLOCK_MONOTONIC, &b);
    action();
    clock_gettime(CLOCK_MONOTONIC, &a);
    unsigned int t = (a.tv_sec * 1e9 + a.tv_nsec) - (b.tv_sec * 1e9 + b.tv_nsec);
    printf("%u\n", t);
}