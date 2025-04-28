#include "./sort.h"

/**
 * Implementação do Selection Sort
 * 
 * @param int* v: Vetor a ser ordenado
 * @param int n: Tamanho do vetor
 * 
 * @return void
 */
void i_selection_sort(int* v, int n) {
    for (unsigned int i = 0; i < (n - 1); i++) {
        int s = i;
        for (unsigned int j = i + 1; j < n; j++) {
            if (v[s] > v[j]) s = j;
        }
        int temp = v[i];
        v[i] = v[s];
        v[s] = temp;
    }
}