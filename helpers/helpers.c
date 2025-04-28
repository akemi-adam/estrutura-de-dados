#include "./helpers.h"

/**
 * Troca dois inteiros de lugar em um array
 * 
 * @param int* v: Array de inteiros
 * @param int i: Primeiro índice
 * @param int j: Segundo índice
 * 
 * @return void
 */
void int_swap(int* v, int i, int j) {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

